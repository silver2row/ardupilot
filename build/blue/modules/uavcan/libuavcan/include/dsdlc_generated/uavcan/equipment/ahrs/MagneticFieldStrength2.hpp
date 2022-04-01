/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/phlastch/ARDU/ardupilot/modules/DroneCAN/DSDL/uavcan/equipment/ahrs/1002.MagneticFieldStrength2.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_AHRS_MAGNETICFIELDSTRENGTH2_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_AHRS_MAGNETICFIELDSTRENGTH2_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Magnetic field readings, in Gauss, in body frame.
# SI units are avoided because of float16 range limitations.
#

uint8 sensor_id

float16[3] magnetic_field_ga
float16[<=9] magnetic_field_covariance
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.ahrs.MagneticFieldStrength2
saturated uint8 sensor_id
saturated float16[3] magnetic_field_ga
saturated float16[<=9] magnetic_field_covariance
******************************************************************************/

#undef sensor_id
#undef magnetic_field_ga
#undef magnetic_field_covariance

namespace uavcan
{
namespace equipment
{
namespace ahrs
{

template <int _tmpl>
struct UAVCAN_EXPORT MagneticFieldStrength2_
{
    typedef const MagneticFieldStrength2_<_tmpl>& ParameterType;
    typedef MagneticFieldStrength2_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > sensor_id;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > magnetic_field_ga;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 9 > magnetic_field_covariance;
    };

    enum
    {
        MinBitLen
            = FieldTypes::sensor_id::MinBitLen
            + FieldTypes::magnetic_field_ga::MinBitLen
            + FieldTypes::magnetic_field_covariance::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::sensor_id::MaxBitLen
            + FieldTypes::magnetic_field_ga::MaxBitLen
            + FieldTypes::magnetic_field_covariance::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::sensor_id >::Type sensor_id;
    typename ::uavcan::StorageType< typename FieldTypes::magnetic_field_ga >::Type magnetic_field_ga;
    typename ::uavcan::StorageType< typename FieldTypes::magnetic_field_covariance >::Type magnetic_field_covariance;

    MagneticFieldStrength2_()
        : sensor_id()
        , magnetic_field_ga()
        , magnetic_field_covariance()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<204 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 1002 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.ahrs.MagneticFieldStrength2";
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
bool MagneticFieldStrength2_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        sensor_id == rhs.sensor_id &&
        magnetic_field_ga == rhs.magnetic_field_ga &&
        magnetic_field_covariance == rhs.magnetic_field_covariance;
}

template <int _tmpl>
bool MagneticFieldStrength2_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(sensor_id, rhs.sensor_id) &&
        ::uavcan::areClose(magnetic_field_ga, rhs.magnetic_field_ga) &&
        ::uavcan::areClose(magnetic_field_covariance, rhs.magnetic_field_covariance);
}

template <int _tmpl>
int MagneticFieldStrength2_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
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
    res = FieldTypes::magnetic_field_ga::encode(self.magnetic_field_ga, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::magnetic_field_covariance::encode(self.magnetic_field_covariance, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int MagneticFieldStrength2_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
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
    res = FieldTypes::magnetic_field_ga::decode(self.magnetic_field_ga, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::magnetic_field_covariance::decode(self.magnetic_field_covariance, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature MagneticFieldStrength2_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xB6AC0C442430297EULL);

    FieldTypes::sensor_id::extendDataTypeSignature(signature);
    FieldTypes::magnetic_field_ga::extendDataTypeSignature(signature);
    FieldTypes::magnetic_field_covariance::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef MagneticFieldStrength2_<0> MagneticFieldStrength2;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::ahrs::MagneticFieldStrength2 > _uavcan_gdtr_registrator_MagneticFieldStrength2;

}

} // Namespace ahrs
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::ahrs::MagneticFieldStrength2 >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::ahrs::MagneticFieldStrength2::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::ahrs::MagneticFieldStrength2 >::stream(Stream& s, ::uavcan::equipment::ahrs::MagneticFieldStrength2::ParameterType obj, const int level)
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
    YamlStreamer< ::uavcan::equipment::ahrs::MagneticFieldStrength2::FieldTypes::sensor_id >::stream(s, obj.sensor_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "magnetic_field_ga: ";
    YamlStreamer< ::uavcan::equipment::ahrs::MagneticFieldStrength2::FieldTypes::magnetic_field_ga >::stream(s, obj.magnetic_field_ga, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "magnetic_field_covariance: ";
    YamlStreamer< ::uavcan::equipment::ahrs::MagneticFieldStrength2::FieldTypes::magnetic_field_covariance >::stream(s, obj.magnetic_field_covariance, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace ahrs
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::ahrs::MagneticFieldStrength2::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::ahrs::MagneticFieldStrength2 >::stream(s, obj, 0);
    return s;
}

} // Namespace ahrs
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_AHRS_MAGNETICFIELDSTRENGTH2_HPP_INCLUDED