/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/phlastch/ARDU/ardupilot/modules/DroneCAN/DSDL/uavcan/equipment/air_data/1025.AngleOfAttack.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_AIR_DATA_ANGLEOFATTACK_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_AIR_DATA_ANGLEOFATTACK_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Angle of attack.
#

uint8 SENSOR_ID_LEFT = 254
uint8 SENSOR_ID_RIGHT = 255
uint8 sensor_id

float16 aoa             # Radians
float16 aoa_variance    # Radians^2
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.air_data.AngleOfAttack
saturated uint8 sensor_id
saturated float16 aoa
saturated float16 aoa_variance
******************************************************************************/

#undef sensor_id
#undef aoa
#undef aoa_variance
#undef SENSOR_ID_LEFT
#undef SENSOR_ID_RIGHT

namespace uavcan
{
namespace equipment
{
namespace air_data
{

template <int _tmpl>
struct UAVCAN_EXPORT AngleOfAttack_
{
    typedef const AngleOfAttack_<_tmpl>& ParameterType;
    typedef AngleOfAttack_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_ID_LEFT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_ID_RIGHT;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > sensor_id;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > aoa;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > aoa_variance;
    };

    enum
    {
        MinBitLen
            = FieldTypes::sensor_id::MinBitLen
            + FieldTypes::aoa::MinBitLen
            + FieldTypes::aoa_variance::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::sensor_id::MaxBitLen
            + FieldTypes::aoa::MaxBitLen
            + FieldTypes::aoa_variance::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_ID_LEFT >::Type SENSOR_ID_LEFT; // 254
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_ID_RIGHT >::Type SENSOR_ID_RIGHT; // 255

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::sensor_id >::Type sensor_id;
    typename ::uavcan::StorageType< typename FieldTypes::aoa >::Type aoa;
    typename ::uavcan::StorageType< typename FieldTypes::aoa_variance >::Type aoa_variance;

    AngleOfAttack_()
        : sensor_id()
        , aoa()
        , aoa_variance()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<40 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 1025 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.air_data.AngleOfAttack";
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
bool AngleOfAttack_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        sensor_id == rhs.sensor_id &&
        aoa == rhs.aoa &&
        aoa_variance == rhs.aoa_variance;
}

template <int _tmpl>
bool AngleOfAttack_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(sensor_id, rhs.sensor_id) &&
        ::uavcan::areClose(aoa, rhs.aoa) &&
        ::uavcan::areClose(aoa_variance, rhs.aoa_variance);
}

template <int _tmpl>
int AngleOfAttack_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::sensor_id::encode(self.sensor_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::aoa::encode(self.aoa, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::aoa_variance::encode(self.aoa_variance, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int AngleOfAttack_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::sensor_id::decode(self.sensor_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::aoa::decode(self.aoa, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::aoa_variance::decode(self.aoa_variance, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature AngleOfAttack_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xD5513C3F7AFAC74EULL);

    FieldTypes::sensor_id::extendDataTypeSignature(signature);
    FieldTypes::aoa::extendDataTypeSignature(signature);
    FieldTypes::aoa_variance::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename AngleOfAttack_<_tmpl>::ConstantTypes::SENSOR_ID_LEFT >::Type
    AngleOfAttack_<_tmpl>::SENSOR_ID_LEFT = 254U; // 254

template <int _tmpl>
const typename ::uavcan::StorageType< typename AngleOfAttack_<_tmpl>::ConstantTypes::SENSOR_ID_RIGHT >::Type
    AngleOfAttack_<_tmpl>::SENSOR_ID_RIGHT = 255U; // 255

/*
 * Final typedef
 */
typedef AngleOfAttack_<0> AngleOfAttack;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::air_data::AngleOfAttack > _uavcan_gdtr_registrator_AngleOfAttack;

}

} // Namespace air_data
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::air_data::AngleOfAttack >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::air_data::AngleOfAttack::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::air_data::AngleOfAttack >::stream(Stream& s, ::uavcan::equipment::air_data::AngleOfAttack::ParameterType obj, const int level)
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
    s << "sensor_id: ";
    YamlStreamer< ::uavcan::equipment::air_data::AngleOfAttack::FieldTypes::sensor_id >::stream(s, obj.sensor_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "aoa: ";
    YamlStreamer< ::uavcan::equipment::air_data::AngleOfAttack::FieldTypes::aoa >::stream(s, obj.aoa, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "aoa_variance: ";
    YamlStreamer< ::uavcan::equipment::air_data::AngleOfAttack::FieldTypes::aoa_variance >::stream(s, obj.aoa_variance, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace air_data
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::air_data::AngleOfAttack::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::air_data::AngleOfAttack >::stream(s, obj, 0);
    return s;
}

} // Namespace air_data
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_AIR_DATA_ANGLEOFATTACK_HPP_INCLUDED