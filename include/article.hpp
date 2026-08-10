#pragma once

#include <iostream>
#include <cstdint>
#include <string>
#include <vector>

struct CoreData
{
    std::string url;
    std::string title;
    std::string source_name;
    std::string category;
    std::string raw_content;
};

struct Metrics 
{
    uint64_t timestamp;
};

struct EngineState
{
    uint64_t url_hash;
    double relevance_score;
    bool is_duplicate;
};

struct Article
{
    CoreData core;
    Metrics metrics;
    EngineState state;
};
