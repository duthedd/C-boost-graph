#ifndef CREATE_TUTORIAL_CHAPTERS_GRAPH_H
#define CREATE_TUTORIAL_CHAPTERS_GRAPH_H



#include <boost/graph/adjacency_list.hpp>

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::undirectedS,
  boost::property<boost::vertex_name_t,std::string>,
  boost::property<boost::edge_name_t,std::string>
>
create_tutorial_chapters_graph() noexcept;

void create_tutorial_chapters_graph_test() noexcept;

#endif // CREATE_TUTORIAL_CHAPTERS_GRAPH_H
