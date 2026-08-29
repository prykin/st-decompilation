
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DE5B0 -> 006B0140 @ 005DE5F2 | 006B0140 -> EXTERNAL:00000097 @ 006B0183

   [STUtilityFunctionApplier] load_resource_string: loads a Win32 string resource into the process
   ring buffer and returns its address
   Evidence: body pattern verified */

char * LoadResourceString(UINT resourceId,HINSTANCE module)

{
  uint uVar1;
  char *pcVar2;

  if (0x1004 < (int)(g_resourceStringBufferOffset + 0x800)) {
    g_resourceStringBufferOffset = 0;
  }
  if (module == (HINSTANCE)0x0) {
    /* ST_CALLSITE[006B0166]: CALL dword ptr [0x0085bc4c]; [STCallResultViewApplier] presentation_only; exact direct-call result=/WinDef.h/HINSTANCE; source view only; no Ghidra override */
    module = GetModuleHandleA((LPCSTR)0x0);
  }
  /* ST_CALLSITE[006B0183]: CALL dword ptr [0x0085be44] */
  uVar1 = LoadStringA(module,resourceId,g_resourceStringBuffer + g_resourceStringBufferOffset,0x800);
  pcVar2 = g_resourceStringBuffer + g_resourceStringBufferOffset;
  if ((uVar1 != 0) && (uVar1 < 0x800)) {
    g_resourceStringBufferOffset = g_resourceStringBufferOffset + 1 + uVar1;
    return pcVar2;
  }
  g_resourceStringBuffer[g_resourceStringBufferOffset] = '\0';
  g_resourceStringBufferOffset = g_resourceStringBufferOffset + 1;
  return pcVar2;
}

