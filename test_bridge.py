import sys
# Add build folder to Python's import search path
sys.path.append("./build")

import nexus_news

# 1. Instantiate the C++ Article struct in Python
article = nexus_news.Article()

# 2. Mutate C++ fields from Python
article.core.title = "C++20 Engine Online"
article.core.source_name = "BBC News"
article.metrics.timestamp = 1718000000
article.state.relevance_score = 0.95

# 3. Verify values read back cleanly from C++ memory
print("--- C++ Struct Bridge Test ---")
print("Title:", article.core.title)
print("Source:", article.core.source_name)
print("Timestamp:", article.metrics.timestamp)
print("Relevance Score:", article.state.relevance_score)
