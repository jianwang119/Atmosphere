#include <switch.h>
#include "fsmitm_service.hpp"

Result FsMitMService::dispatch(IpcParsedCommand &r, IpcCommand &out_c, u64 cmd_id, u8 *pointer_buffer, size_t pointer_buffer_size) {
    Result rc = 0xF601;
    return rc;
}

Result FsMitMService::postprocess(IpcParsedCommand &r, IpcCommand &out_c, u64 cmd_id, u8 *pointer_buffer, size_t pointer_buffer_size) {
    struct {
        u64 magic;
        u64 result;
    } *resp = (decltype(resp))r.Raw;
    
    Result rc = (Result)resp->result;
    /* TODO: Hook here, if needed. */
    return rc;
}

Result FsMitMService::handle_deferred() {
    /* This service is never deferrable. */
    return 0;
}