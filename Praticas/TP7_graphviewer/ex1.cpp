#include "graphviewer.h"

using namespace std;
using Node = GraphViewer::Node;
using Edge = GraphViewer::Edge;

void ex1() {
    GraphViewer gv;
    gv.setCenter(sf::Vector2f(300,300));

    Node &node0=gv.addNode(0,sf::Vector2f(200,300));
    node0.setColor(GraphViewer::BLUE);

    Node &node1=gv.addNode(1,sf::Vector2f(400,300));
    node1.setColor(GraphViewer::BLUE);

    Edge &edge1=gv.addEdge(1,node0,node1,GraphViewer::Edge::DIRECTED);

    gv.removeNode(1);

    Node &node2=gv.addNode(1,sf::Vector2f(500,300));
    node2.setColor(GraphViewer::BLUE);

    Edge &edge2=gv.addEdge(2,node0,node2,GraphViewer::Edge::DIRECTED);
    edge2.setColor(GraphViewer::BLACK);

    node2.setLabel("Node 2 - Black");

    edge2.setLabel("This is an edge");

    node2.setColor(GraphViewer::GREEN);

    for(Edge *edge: gv.getEdges())
        edge->setColor(GraphViewer::YELLOW);

    gv.setBackground("../TP7_graphviewer/resources/background.png");

    gv.createWindow(600,600);
    gv.join();
}
