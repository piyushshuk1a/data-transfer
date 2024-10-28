#include <iostream>
#include <vector>
#include <set>
#include <random>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>  // Make sure to link with -lssl -lcrypto

std::string sha256(const std::string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);
    
    std::stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

unsigned int generate_seed(const std::string& client_seed, const std::string& server_seed_hashed) {
    std::string combined_seed = client_seed + server_seed_hashed;
    std::string hashed_combined_seed = sha256(combined_seed);
    
    unsigned int seed;
    std::stringstream ss;
    ss << std::hex << hashed_combined_seed.substr(0, 8);
    ss >> seed;
    
    return seed;
}

std::vector<std::vector<char>> generate_mines(int width, int height, int total_mines, unsigned int seed) {
    std::vector<std::vector<char>> board(height, std::vector<char>(width, '-'));
    std::set<std::pair<int, int>> mine_positions;

    std::mt19937 rng(seed);
    std::uniform_int_distribution<int> dist(0, width * height - 1);

    while (mine_positions.size() < total_mines) {
        int pos = dist(rng);
        int x = pos % width;
        int y = pos / width;
        mine_positions.insert({y, x});
    }

    for (const auto& pos : mine_positions) {
        board[pos.first][pos.second] = 'M';
    }

    return board;
}

void print_board(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
}

int main() {
    std::string client_seed = "example_client_seed";
    std::string server_seed_hashed = sha256("example_server_seed");

    unsigned int combined_seed = generate_seed(client_seed, server_seed_hashed);
    std::vector<std::vector<char>> board = generate_mines(5, 5, 10, combined_seed);

    print_board(board);

    return 0;
}
