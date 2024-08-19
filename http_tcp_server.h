#ifndef INCLUDED_HTTP_TCPSERVER
#define INCLUDED_HTTP_TCPSERVER
namespace http
{
    class TcpServer
    {
    public:
        TcpServer();
        ~TcpServer();

    private:
        WSADATA m_wsaData;
        SOCKET m_socket;
        int startServer();
        int closeServer();
    };
}
#endif