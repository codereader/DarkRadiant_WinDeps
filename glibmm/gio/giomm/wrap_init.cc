
#include <glib.h>

// Disable the 'const' function attribute of the get_type() functions.
// GCC would optimize them out because we don't use the return value.
#undef  G_GNUC_CONST
#define G_GNUC_CONST /* empty */

#include <giomm/wrap_init.h>
#include <glibmm/error.h>
#include <glibmm/object.h>

// #include the widget headers so that we can call the get_type() static methods:

#include "appinfo.h"
#include "asyncinitable.h"
#include "asyncresult.h"
#include "bufferedinputstream.h"
#include "bufferedoutputstream.h"
#include "cancellable.h"
#include "credentials.h"
#include "datainputstream.h"
#include "dataoutputstream.h"
#include "dbusaddress.h"
#include "dbusauthobserver.h"
#include "dbusconnection.h"
#include "dbuserror.h"
#include "dbuserrorutils.h"
#include "dbusinterfacevtable.h"
#include "dbusintrospection.h"
#include "dbusmessage.h"
#include "dbusmethodinvocation.h"
#include "dbusownname.h"
#include "dbusproxy.h"
#include "dbusserver.h"
#include "dbussubtreevtable.h"
#include "dbusutils.h"
#include "dbuswatchname.h"
#ifndef G_OS_WIN32
#include "desktopappinfo.h"
#endif //G_OS_WIN32
#include "drive.h"
#include "emblem.h"
#include "emblemedicon.h"
#include "enums.h"
#include "error.h"
#include "file.h"
#include "fileattributeinfo.h"
#include "fileattributeinfolist.h"
#include "fileenumerator.h"
#include "fileicon.h"
#include "fileinfo.h"
#include "fileinputstream.h"
#include "fileiostream.h"
#include "filemonitor.h"
#include "filenamecompleter.h"
#include "fileoutputstream.h"
#include "filterinputstream.h"
#include "filteroutputstream.h"
#include "icon.h"
#include "inetaddress.h"
#include "inetsocketaddress.h"
#include "initable.h"
#include "inputstream.h"
#include "iostream.h"
#include "loadableicon.h"
#include "memoryinputstream.h"
#include "memoryoutputstream.h"
#include "mount.h"
#include "mountoperation.h"
#include "networkaddress.h"
#include "networkservice.h"
#include "outputstream.h"
#include "proxy.h"
#include "proxyaddress.h"
#include "proxyresolver.h"
#include "resolver.h"
#include "seekable.h"
#include "settings.h"
#include "socket.h"
#include "socketaddress.h"
#include "socketaddressenumerator.h"
#include "socketclient.h"
#include "socketconnectable.h"
#include "socketconnection.h"
#include "socketcontrolmessage.h"
#include "socketlistener.h"
#include "socketservice.h"
#include "srvtarget.h"
#include "tcpconnection.h"
#include "themedicon.h"
#include "threadedsocketservice.h"
#ifndef G_OS_WIN32
#include "unixconnection.h"
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
#include "unixcredentialsmessage.h"
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
#include "unixfdlist.h"
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
#include "unixfdmessage.h"
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
#include "unixinputstream.h"
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
#include "unixoutputstream.h"
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
#include "unixsocketaddress.h"
#endif //G_OS_WIN32
#include "volume.h"
#include "volumemonitor.h"

extern "C"
{

//Declarations of the *_get_type() functions:

GType g_app_launch_context_get_type(void);
GType g_dbus_auth_observer_get_type(void);
GType g_buffered_input_stream_get_type(void);
GType g_buffered_output_stream_get_type(void);
GType g_cancellable_get_type(void);
GType g_dbus_connection_get_type(void);
GType g_credentials_get_type(void);
GType g_data_input_stream_get_type(void);
GType g_data_output_stream_get_type(void);
#ifndef G_OS_WIN32
GType g_desktop_app_info_get_type(void);
#endif //G_OS_WIN32
GType g_emblem_get_type(void);
GType g_emblemed_icon_get_type(void);
GType g_file_enumerator_get_type(void);
GType g_file_io_stream_get_type(void);
GType g_file_icon_get_type(void);
GType g_file_info_get_type(void);
GType g_file_input_stream_get_type(void);
GType g_file_monitor_get_type(void);
GType g_file_output_stream_get_type(void);
GType g_filename_completer_get_type(void);
GType g_filter_input_stream_get_type(void);
GType g_filter_output_stream_get_type(void);
GType g_io_stream_get_type(void);
GType g_inet_address_get_type(void);
GType g_inet_socket_address_get_type(void);
GType g_input_stream_get_type(void);
GType g_memory_input_stream_get_type(void);
GType g_memory_output_stream_get_type(void);
GType g_dbus_message_get_type(void);
GType g_dbus_method_invocation_get_type(void);
GType g_mount_operation_get_type(void);
GType g_network_address_get_type(void);
GType g_network_service_get_type(void);
GType g_output_stream_get_type(void);
GType g_dbus_proxy_get_type(void);
GType g_proxy_address_get_type(void);
GType g_resolver_get_type(void);
GType g_dbus_server_get_type(void);
GType g_settings_get_type(void);
GType g_socket_get_type(void);
GType g_socket_address_get_type(void);
GType g_socket_address_enumerator_get_type(void);
GType g_socket_client_get_type(void);
GType g_socket_connection_get_type(void);
GType g_socket_control_message_get_type(void);
GType g_socket_listener_get_type(void);
GType g_socket_service_get_type(void);
GType g_tcp_connection_get_type(void);
GType g_themed_icon_get_type(void);
GType g_threaded_socket_service_get_type(void);
#ifndef G_OS_WIN32
GType g_unix_connection_get_type(void);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
GType g_unix_credentials_message_get_type(void);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
GType g_unix_fd_list_get_type(void);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
GType g_unix_fd_message_get_type(void);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
GType g_unix_input_stream_get_type(void);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
GType g_unix_output_stream_get_type(void);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
GType g_unix_socket_address_get_type(void);
#endif //G_OS_WIN32
GType g_volume_monitor_get_type(void);

//Declarations of the *_error_quark() functions:

GQuark g_dbus_error_quark(void);
GQuark g_io_error_quark(void);
GQuark g_resolver_error_quark(void);
} // extern "C"


//Declarations of the *_Class::wrap_new() methods, instead of including all the private headers:

namespace Gio {  class AppLaunchContext_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio { namespace DBus {  class AuthObserver_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gio {  class BufferedInputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class BufferedOutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class Cancellable_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio { namespace DBus {  class Connection_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gio {  class Credentials_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class DataInputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class DataOutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#ifndef G_OS_WIN32
namespace Gio {  class DesktopAppInfo_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
namespace Gio {  class Emblem_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class EmblemedIcon_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileEnumerator_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileIOStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileIcon_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileInfo_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileInputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileMonitor_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FileOutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FilenameCompleter_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FilterInputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class FilterOutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class IOStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class InetAddress_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class InetSocketAddress_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class InputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class MemoryInputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class MemoryOutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio { namespace DBus {  class Message_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gio { namespace DBus {  class MethodInvocation_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gio {  class MountOperation_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class NetworkAddress_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class NetworkService_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class OutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class Proxy_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class ProxyAddress_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class Resolver_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio { namespace DBus {  class Server_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gio {  class Settings_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class Socket_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketAddress_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketAddressEnumerator_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketClient_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketConnection_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketControlMessage_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketListener_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class SocketService_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class TcpConnection_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class ThemedIcon_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gio {  class ThreadedSocketService_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#ifndef G_OS_WIN32
namespace Gio {  class UnixConnection_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
namespace Gio {  class UnixCredentialsMessage_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
namespace Gio {  class UnixFDList_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
namespace Gio {  class UnixFDMessage_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
namespace Gio {  class UnixInputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
namespace Gio {  class UnixOutputStream_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
namespace Gio {  class UnixSocketAddress_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
#endif //G_OS_WIN32
namespace Gio {  class VolumeMonitor_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }

namespace Gio { 

void wrap_init()
{
  // Register Error domains:
  Glib::Error::register_domain(g_dbus_error_quark(), &::Gio::DBus::Error::throw_func);
  Glib::Error::register_domain(g_io_error_quark(), &::Gio::Error::throw_func);
  Glib::Error::register_domain(g_resolver_error_quark(), &::Gio::ResolverError::throw_func);

// Map gtypes to gtkmm wrapper-creation functions:
  Glib::wrap_register(g_app_launch_context_get_type(), &Gio::AppLaunchContext_Class::wrap_new);
  Glib::wrap_register(g_dbus_auth_observer_get_type(), &Gio::DBus::AuthObserver_Class::wrap_new);
  Glib::wrap_register(g_buffered_input_stream_get_type(), &Gio::BufferedInputStream_Class::wrap_new);
  Glib::wrap_register(g_buffered_output_stream_get_type(), &Gio::BufferedOutputStream_Class::wrap_new);
  Glib::wrap_register(g_cancellable_get_type(), &Gio::Cancellable_Class::wrap_new);
  Glib::wrap_register(g_dbus_connection_get_type(), &Gio::DBus::Connection_Class::wrap_new);
  Glib::wrap_register(g_credentials_get_type(), &Gio::Credentials_Class::wrap_new);
  Glib::wrap_register(g_data_input_stream_get_type(), &Gio::DataInputStream_Class::wrap_new);
  Glib::wrap_register(g_data_output_stream_get_type(), &Gio::DataOutputStream_Class::wrap_new);
#ifndef G_OS_WIN32
  Glib::wrap_register(g_desktop_app_info_get_type(), &Gio::DesktopAppInfo_Class::wrap_new);
#endif //G_OS_WIN32
  Glib::wrap_register(g_emblem_get_type(), &Gio::Emblem_Class::wrap_new);
  Glib::wrap_register(g_emblemed_icon_get_type(), &Gio::EmblemedIcon_Class::wrap_new);
  Glib::wrap_register(g_file_enumerator_get_type(), &Gio::FileEnumerator_Class::wrap_new);
  Glib::wrap_register(g_file_io_stream_get_type(), &Gio::FileIOStream_Class::wrap_new);
  Glib::wrap_register(g_file_icon_get_type(), &Gio::FileIcon_Class::wrap_new);
  Glib::wrap_register(g_file_info_get_type(), &Gio::FileInfo_Class::wrap_new);
  Glib::wrap_register(g_file_input_stream_get_type(), &Gio::FileInputStream_Class::wrap_new);
  Glib::wrap_register(g_file_monitor_get_type(), &Gio::FileMonitor_Class::wrap_new);
  Glib::wrap_register(g_file_output_stream_get_type(), &Gio::FileOutputStream_Class::wrap_new);
  Glib::wrap_register(g_filename_completer_get_type(), &Gio::FilenameCompleter_Class::wrap_new);
  Glib::wrap_register(g_filter_input_stream_get_type(), &Gio::FilterInputStream_Class::wrap_new);
  Glib::wrap_register(g_filter_output_stream_get_type(), &Gio::FilterOutputStream_Class::wrap_new);
  Glib::wrap_register(g_io_stream_get_type(), &Gio::IOStream_Class::wrap_new);
  Glib::wrap_register(g_inet_address_get_type(), &Gio::InetAddress_Class::wrap_new);
  Glib::wrap_register(g_inet_socket_address_get_type(), &Gio::InetSocketAddress_Class::wrap_new);
  Glib::wrap_register(g_input_stream_get_type(), &Gio::InputStream_Class::wrap_new);
  Glib::wrap_register(g_memory_input_stream_get_type(), &Gio::MemoryInputStream_Class::wrap_new);
  Glib::wrap_register(g_memory_output_stream_get_type(), &Gio::MemoryOutputStream_Class::wrap_new);
  Glib::wrap_register(g_dbus_message_get_type(), &Gio::DBus::Message_Class::wrap_new);
  Glib::wrap_register(g_dbus_method_invocation_get_type(), &Gio::DBus::MethodInvocation_Class::wrap_new);
  Glib::wrap_register(g_mount_operation_get_type(), &Gio::MountOperation_Class::wrap_new);
  Glib::wrap_register(g_network_address_get_type(), &Gio::NetworkAddress_Class::wrap_new);
  Glib::wrap_register(g_network_service_get_type(), &Gio::NetworkService_Class::wrap_new);
  Glib::wrap_register(g_output_stream_get_type(), &Gio::OutputStream_Class::wrap_new);
  Glib::wrap_register(g_dbus_proxy_get_type(), &Gio::Proxy_Class::wrap_new);
  Glib::wrap_register(g_proxy_address_get_type(), &Gio::ProxyAddress_Class::wrap_new);
  Glib::wrap_register(g_resolver_get_type(), &Gio::Resolver_Class::wrap_new);
  Glib::wrap_register(g_dbus_server_get_type(), &Gio::DBus::Server_Class::wrap_new);
  Glib::wrap_register(g_settings_get_type(), &Gio::Settings_Class::wrap_new);
  Glib::wrap_register(g_socket_get_type(), &Gio::Socket_Class::wrap_new);
  Glib::wrap_register(g_socket_address_get_type(), &Gio::SocketAddress_Class::wrap_new);
  Glib::wrap_register(g_socket_address_enumerator_get_type(), &Gio::SocketAddressEnumerator_Class::wrap_new);
  Glib::wrap_register(g_socket_client_get_type(), &Gio::SocketClient_Class::wrap_new);
  Glib::wrap_register(g_socket_connection_get_type(), &Gio::SocketConnection_Class::wrap_new);
  Glib::wrap_register(g_socket_control_message_get_type(), &Gio::SocketControlMessage_Class::wrap_new);
  Glib::wrap_register(g_socket_listener_get_type(), &Gio::SocketListener_Class::wrap_new);
  Glib::wrap_register(g_socket_service_get_type(), &Gio::SocketService_Class::wrap_new);
  Glib::wrap_register(g_tcp_connection_get_type(), &Gio::TcpConnection_Class::wrap_new);
  Glib::wrap_register(g_themed_icon_get_type(), &Gio::ThemedIcon_Class::wrap_new);
  Glib::wrap_register(g_threaded_socket_service_get_type(), &Gio::ThreadedSocketService_Class::wrap_new);
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_connection_get_type(), &Gio::UnixConnection_Class::wrap_new);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_credentials_message_get_type(), &Gio::UnixCredentialsMessage_Class::wrap_new);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_fd_list_get_type(), &Gio::UnixFDList_Class::wrap_new);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_fd_message_get_type(), &Gio::UnixFDMessage_Class::wrap_new);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_input_stream_get_type(), &Gio::UnixInputStream_Class::wrap_new);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_output_stream_get_type(), &Gio::UnixOutputStream_Class::wrap_new);
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Glib::wrap_register(g_unix_socket_address_get_type(), &Gio::UnixSocketAddress_Class::wrap_new);
#endif //G_OS_WIN32
  Glib::wrap_register(g_volume_monitor_get_type(), &Gio::VolumeMonitor_Class::wrap_new);

  // Register the gtkmm gtypes:
  Gio::AppLaunchContext::get_type();
  Gio::DBus::AuthObserver::get_type();
  Gio::BufferedInputStream::get_type();
  Gio::BufferedOutputStream::get_type();
  Gio::Cancellable::get_type();
  Gio::DBus::Connection::get_type();
  Gio::Credentials::get_type();
  Gio::DataInputStream::get_type();
  Gio::DataOutputStream::get_type();
#ifndef G_OS_WIN32
  Gio::DesktopAppInfo::get_type();
#endif //G_OS_WIN32
  Gio::Emblem::get_type();
  Gio::EmblemedIcon::get_type();
  Gio::FileEnumerator::get_type();
  Gio::FileIOStream::get_type();
  Gio::FileIcon::get_type();
  Gio::FileInfo::get_type();
  Gio::FileInputStream::get_type();
  Gio::FileMonitor::get_type();
  Gio::FileOutputStream::get_type();
  Gio::FilenameCompleter::get_type();
  Gio::FilterInputStream::get_type();
  Gio::FilterOutputStream::get_type();
  Gio::IOStream::get_type();
  Gio::InetAddress::get_type();
  Gio::InetSocketAddress::get_type();
  Gio::InputStream::get_type();
  Gio::MemoryInputStream::get_type();
  Gio::MemoryOutputStream::get_type();
  Gio::DBus::Message::get_type();
  Gio::DBus::MethodInvocation::get_type();
  Gio::MountOperation::get_type();
  Gio::NetworkAddress::get_type();
  Gio::NetworkService::get_type();
  Gio::OutputStream::get_type();
  Gio::Proxy::get_type();
  Gio::ProxyAddress::get_type();
  Gio::Resolver::get_type();
  Gio::DBus::Server::get_type();
  Gio::Settings::get_type();
  Gio::Socket::get_type();
  Gio::SocketAddress::get_type();
  Gio::SocketAddressEnumerator::get_type();
  Gio::SocketClient::get_type();
  Gio::SocketConnection::get_type();
  Gio::SocketControlMessage::get_type();
  Gio::SocketListener::get_type();
  Gio::SocketService::get_type();
  Gio::TcpConnection::get_type();
  Gio::ThemedIcon::get_type();
  Gio::ThreadedSocketService::get_type();
#ifndef G_OS_WIN32
  Gio::UnixConnection::get_type();
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Gio::UnixCredentialsMessage::get_type();
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Gio::UnixFDList::get_type();
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Gio::UnixFDMessage::get_type();
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Gio::UnixInputStream::get_type();
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Gio::UnixOutputStream::get_type();
#endif //G_OS_WIN32
#ifndef G_OS_WIN32
  Gio::UnixSocketAddress::get_type();
#endif //G_OS_WIN32
  Gio::VolumeMonitor::get_type();

} // wrap_init()

} //Gio


