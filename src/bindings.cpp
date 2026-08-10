#include <pybind11/pybind11.h>
#include "article.hpp"

namespace py = pybind11;

PYBIND11_MODULE(nexus_news , m)
{
    py::class_<CoreData>(m , "CoreData")

        .def(py::init<>())

        .def_readwrite("url" , &CoreData::url)
        .def_readwrite("title" , &CoreData::title)
        .def_readwrite("source_name" , &CoreData::source_name)
        .def_readwrite("category" , &CoreData::category)
        .def_readwrite("raw_content" , &CoreData::raw_content);

    py::class_<Metrics>(m , "Metrics")

        .def(py::init<>())
        .def_readwrite("timestamp" , &Metrics::timestamp);

    py::class_<EngineState>(m, "EngineState")
        .def(py::init<>())
        .def_readwrite("url_hash", &EngineState::url_hash)
        .def_readwrite("relevance_score", &EngineState::relevance_score)
        .def_readwrite("is_duplicate", &EngineState::is_duplicate);

    py::class_<Article>(m, "Article")
        .def(py::init<>())
        .def_readwrite("core", &Article::core)
        .def_readwrite("metrics", &Article::metrics)
        .def_readwrite("state", &Article::state);
}


