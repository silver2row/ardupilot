/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/phlastch/ARDU/ardupilot/modules/DroneCAN/DSDL/uavcan/protocol/dynamic_node_id/server/Entry.uavcan
 */

#ifndef UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_SERVER_ENTRY_HPP_INCLUDED
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_SERVER_ENTRY_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# THIS DEFINITION IS SUBJECT TO CHANGE.
#
# One dynamic node ID allocation entry.
# This type is a part of the Raft consensus algorithm.
# Please refer to the specification for details.
#

uint32 term             # Refer to the Raft paper for explanation.

uint8[16] unique_id     # Unique ID of this allocation.

void1
uint7 node_id           # Node ID of this allocation.
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.dynamic_node_id.server.Entry
saturated uint32 term
saturated uint8[16] unique_id
void1
saturated uint7 node_id
******************************************************************************/

#undef term
#undef unique_id
#undef _void_0
#undef node_id

namespace uavcan
{
namespace protocol
{
namespace dynamic_node_id
{
namespace server
{

template <int _tmpl>
struct UAVCAN_EXPORT Entry_
{
    typedef const Entry_<_tmpl>& ParameterType;
    typedef Entry_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > term;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 16 > unique_id;
        typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > _void_0;
        typedef ::uavcan::IntegerSpec< 7, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > node_id;
    };

    enum
    {
        MinBitLen
            = FieldTypes::term::MinBitLen
            + FieldTypes::unique_id::MinBitLen
            + FieldTypes::_void_0::MinBitLen
            + FieldTypes::node_id::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::term::MaxBitLen
            + FieldTypes::unique_id::MaxBitLen
            + FieldTypes::_void_0::MaxBitLen
            + FieldTypes::node_id::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::term >::Type term;
    typename ::uavcan::StorageType< typename FieldTypes::unique_id >::Type unique_id;
    typename ::uavcan::StorageType< typename FieldTypes::node_id >::Type node_id;

    Entry_()
        : term()
        , unique_id()
        , node_id()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<168 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.dynamic_node_id.server.Entry";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Entry_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        term == rhs.term &&
        unique_id == rhs.unique_id &&
        node_id == rhs.node_id;
}

template <int _tmpl>
bool Entry_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(term, rhs.term) &&
        ::uavcan::areClose(unique_id, rhs.unique_id) &&
        ::uavcan::areClose(node_id, rhs.node_id);
}

template <int _tmpl>
int Entry_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    int res = 1;
    res = FieldTypes::term::encode(self.term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::unique_id::encode(self.unique_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::_void_0::encode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::node_id::encode(self.node_id, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Entry_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    int res = 1;
    res = FieldTypes::term::decode(self.term, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::unique_id::decode(self.unique_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::_void_0::decode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::node_id::decode(self.node_id, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Entry_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x7FAA779D64FA75C2ULL);

    FieldTypes::term::extendDataTypeSignature(signature);
    FieldTypes::unique_id::extendDataTypeSignature(signature);
    FieldTypes::_void_0::extendDataTypeSignature(signature);
    FieldTypes::node_id::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Entry_<0> Entry;

// No default registration

} // Namespace server
} // Namespace dynamic_node_id
} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::Entry >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::dynamic_node_id::server::Entry::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::Entry >::stream(Stream& s, ::uavcan::protocol::dynamic_node_id::server::Entry::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "term: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::Entry::FieldTypes::term >::stream(s, obj.term, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "unique_id: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::Entry::FieldTypes::unique_id >::stream(s, obj.unique_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "node_id: ";
    YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::Entry::FieldTypes::node_id >::stream(s, obj.node_id, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace dynamic_node_id
{
namespace server
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::dynamic_node_id::server::Entry::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::dynamic_node_id::server::Entry >::stream(s, obj, 0);
    return s;
}

} // Namespace server
} // Namespace dynamic_node_id
} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_SERVER_ENTRY_HPP_INCLUDED