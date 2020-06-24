/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/auth/secret.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_AUTH_SECRET_PROTO_UPB_H_
#define ENVOY_API_V2_AUTH_SECRET_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_auth_GenericSecret;
struct envoy_api_v2_auth_SdsSecretConfig;
struct envoy_api_v2_auth_Secret;
typedef struct envoy_api_v2_auth_GenericSecret envoy_api_v2_auth_GenericSecret;
typedef struct envoy_api_v2_auth_SdsSecretConfig envoy_api_v2_auth_SdsSecretConfig;
typedef struct envoy_api_v2_auth_Secret envoy_api_v2_auth_Secret;
extern const upb_msglayout envoy_api_v2_auth_GenericSecret_msginit;
extern const upb_msglayout envoy_api_v2_auth_SdsSecretConfig_msginit;
extern const upb_msglayout envoy_api_v2_auth_Secret_msginit;
struct envoy_api_v2_auth_CertificateValidationContext;
struct envoy_api_v2_auth_TlsCertificate;
struct envoy_api_v2_auth_TlsSessionTicketKeys;
struct envoy_api_v2_core_ConfigSource;
struct envoy_api_v2_core_DataSource;
extern const upb_msglayout envoy_api_v2_auth_CertificateValidationContext_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsCertificate_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsSessionTicketKeys_msginit;
extern const upb_msglayout envoy_api_v2_core_ConfigSource_msginit;
extern const upb_msglayout envoy_api_v2_core_DataSource_msginit;


/* envoy.api.v2.auth.GenericSecret */

UPB_INLINE envoy_api_v2_auth_GenericSecret *envoy_api_v2_auth_GenericSecret_new(upb_arena *arena) {
  return (envoy_api_v2_auth_GenericSecret *)_upb_msg_new(&envoy_api_v2_auth_GenericSecret_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_GenericSecret *envoy_api_v2_auth_GenericSecret_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_GenericSecret *ret = envoy_api_v2_auth_GenericSecret_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_GenericSecret_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_GenericSecret_serialize(const envoy_api_v2_auth_GenericSecret *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_GenericSecret_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_auth_GenericSecret_has_secret(const envoy_api_v2_auth_GenericSecret *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_GenericSecret_secret(const envoy_api_v2_auth_GenericSecret *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const struct envoy_api_v2_core_DataSource*); }

UPB_INLINE void envoy_api_v2_auth_GenericSecret_set_secret(envoy_api_v2_auth_GenericSecret *msg, struct envoy_api_v2_core_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), struct envoy_api_v2_core_DataSource*) = value;
}
UPB_INLINE struct envoy_api_v2_core_DataSource* envoy_api_v2_auth_GenericSecret_mutable_secret(envoy_api_v2_auth_GenericSecret *msg, upb_arena *arena) {
  struct envoy_api_v2_core_DataSource* sub = (struct envoy_api_v2_core_DataSource*)envoy_api_v2_auth_GenericSecret_secret(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_DataSource*)_upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_GenericSecret_set_secret(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.auth.SdsSecretConfig */

UPB_INLINE envoy_api_v2_auth_SdsSecretConfig *envoy_api_v2_auth_SdsSecretConfig_new(upb_arena *arena) {
  return (envoy_api_v2_auth_SdsSecretConfig *)_upb_msg_new(&envoy_api_v2_auth_SdsSecretConfig_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_SdsSecretConfig *envoy_api_v2_auth_SdsSecretConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_SdsSecretConfig *ret = envoy_api_v2_auth_SdsSecretConfig_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_SdsSecretConfig_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_SdsSecretConfig_serialize(const envoy_api_v2_auth_SdsSecretConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_SdsSecretConfig_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_auth_SdsSecretConfig_name(const envoy_api_v2_auth_SdsSecretConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_api_v2_auth_SdsSecretConfig_has_sds_config(const envoy_api_v2_auth_SdsSecretConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_api_v2_core_ConfigSource* envoy_api_v2_auth_SdsSecretConfig_sds_config(const envoy_api_v2_auth_SdsSecretConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct envoy_api_v2_core_ConfigSource*); }

UPB_INLINE void envoy_api_v2_auth_SdsSecretConfig_set_name(envoy_api_v2_auth_SdsSecretConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_api_v2_auth_SdsSecretConfig_set_sds_config(envoy_api_v2_auth_SdsSecretConfig *msg, struct envoy_api_v2_core_ConfigSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct envoy_api_v2_core_ConfigSource*) = value;
}
UPB_INLINE struct envoy_api_v2_core_ConfigSource* envoy_api_v2_auth_SdsSecretConfig_mutable_sds_config(envoy_api_v2_auth_SdsSecretConfig *msg, upb_arena *arena) {
  struct envoy_api_v2_core_ConfigSource* sub = (struct envoy_api_v2_core_ConfigSource*)envoy_api_v2_auth_SdsSecretConfig_sds_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_ConfigSource*)_upb_msg_new(&envoy_api_v2_core_ConfigSource_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_SdsSecretConfig_set_sds_config(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.auth.Secret */

UPB_INLINE envoy_api_v2_auth_Secret *envoy_api_v2_auth_Secret_new(upb_arena *arena) {
  return (envoy_api_v2_auth_Secret *)_upb_msg_new(&envoy_api_v2_auth_Secret_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_Secret *envoy_api_v2_auth_Secret_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_Secret *ret = envoy_api_v2_auth_Secret_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_Secret_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_Secret_serialize(const envoy_api_v2_auth_Secret *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_Secret_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_auth_Secret_type_tls_certificate = 2,
  envoy_api_v2_auth_Secret_type_session_ticket_keys = 3,
  envoy_api_v2_auth_Secret_type_validation_context = 4,
  envoy_api_v2_auth_Secret_type_generic_secret = 5,
  envoy_api_v2_auth_Secret_type_NOT_SET = 0
} envoy_api_v2_auth_Secret_type_oneofcases;
UPB_INLINE envoy_api_v2_auth_Secret_type_oneofcases envoy_api_v2_auth_Secret_type_case(const envoy_api_v2_auth_Secret* msg) { return (envoy_api_v2_auth_Secret_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE upb_strview envoy_api_v2_auth_Secret_name(const envoy_api_v2_auth_Secret *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_api_v2_auth_Secret_has_tls_certificate(const envoy_api_v2_auth_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 2; }
UPB_INLINE const struct envoy_api_v2_auth_TlsCertificate* envoy_api_v2_auth_Secret_tls_certificate(const envoy_api_v2_auth_Secret *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_TlsCertificate*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 2, NULL); }
UPB_INLINE bool envoy_api_v2_auth_Secret_has_session_ticket_keys(const envoy_api_v2_auth_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE const struct envoy_api_v2_auth_TlsSessionTicketKeys* envoy_api_v2_auth_Secret_session_ticket_keys(const envoy_api_v2_auth_Secret *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_TlsSessionTicketKeys*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }
UPB_INLINE bool envoy_api_v2_auth_Secret_has_validation_context(const envoy_api_v2_auth_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 4; }
UPB_INLINE const struct envoy_api_v2_auth_CertificateValidationContext* envoy_api_v2_auth_Secret_validation_context(const envoy_api_v2_auth_Secret *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_CertificateValidationContext*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 4, NULL); }
UPB_INLINE bool envoy_api_v2_auth_Secret_has_generic_secret(const envoy_api_v2_auth_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 5; }
UPB_INLINE const envoy_api_v2_auth_GenericSecret* envoy_api_v2_auth_Secret_generic_secret(const envoy_api_v2_auth_Secret *msg) { return UPB_READ_ONEOF(msg, const envoy_api_v2_auth_GenericSecret*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 5, NULL); }

UPB_INLINE void envoy_api_v2_auth_Secret_set_name(envoy_api_v2_auth_Secret *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_api_v2_auth_Secret_set_tls_certificate(envoy_api_v2_auth_Secret *msg, struct envoy_api_v2_auth_TlsCertificate* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_TlsCertificate*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 2);
}
UPB_INLINE struct envoy_api_v2_auth_TlsCertificate* envoy_api_v2_auth_Secret_mutable_tls_certificate(envoy_api_v2_auth_Secret *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_TlsCertificate* sub = (struct envoy_api_v2_auth_TlsCertificate*)envoy_api_v2_auth_Secret_tls_certificate(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_TlsCertificate*)_upb_msg_new(&envoy_api_v2_auth_TlsCertificate_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_Secret_set_tls_certificate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_Secret_set_session_ticket_keys(envoy_api_v2_auth_Secret *msg, struct envoy_api_v2_auth_TlsSessionTicketKeys* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_TlsSessionTicketKeys*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct envoy_api_v2_auth_TlsSessionTicketKeys* envoy_api_v2_auth_Secret_mutable_session_ticket_keys(envoy_api_v2_auth_Secret *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_TlsSessionTicketKeys* sub = (struct envoy_api_v2_auth_TlsSessionTicketKeys*)envoy_api_v2_auth_Secret_session_ticket_keys(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_TlsSessionTicketKeys*)_upb_msg_new(&envoy_api_v2_auth_TlsSessionTicketKeys_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_Secret_set_session_ticket_keys(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_Secret_set_validation_context(envoy_api_v2_auth_Secret *msg, struct envoy_api_v2_auth_CertificateValidationContext* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_CertificateValidationContext*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 4);
}
UPB_INLINE struct envoy_api_v2_auth_CertificateValidationContext* envoy_api_v2_auth_Secret_mutable_validation_context(envoy_api_v2_auth_Secret *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_CertificateValidationContext* sub = (struct envoy_api_v2_auth_CertificateValidationContext*)envoy_api_v2_auth_Secret_validation_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_CertificateValidationContext*)_upb_msg_new(&envoy_api_v2_auth_CertificateValidationContext_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_Secret_set_validation_context(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_Secret_set_generic_secret(envoy_api_v2_auth_Secret *msg, envoy_api_v2_auth_GenericSecret* value) {
  UPB_WRITE_ONEOF(msg, envoy_api_v2_auth_GenericSecret*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 5);
}
UPB_INLINE struct envoy_api_v2_auth_GenericSecret* envoy_api_v2_auth_Secret_mutable_generic_secret(envoy_api_v2_auth_Secret *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_GenericSecret* sub = (struct envoy_api_v2_auth_GenericSecret*)envoy_api_v2_auth_Secret_generic_secret(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_GenericSecret*)_upb_msg_new(&envoy_api_v2_auth_GenericSecret_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_Secret_set_generic_secret(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_AUTH_SECRET_PROTO_UPB_H_ */
