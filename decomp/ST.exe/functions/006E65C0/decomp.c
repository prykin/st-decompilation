
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; MOVSX at 0052B244 establishes signed source width 2 |
   0052B330 -> 006E65C0 @ 0052B55C; MOVSX at 0052B549 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; CPanelTy::sub_0052AFE0 parameter param_2 | 0052B330 ->
   006E65C0 @ 0052B55C; /CPanelTy+0xdd6

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; CPanelTy::sub_0052AFE0 parameter param_3 | 0052B330 ->
   006E65C0 @ 0052B55C; /CPanelTy+0xdda

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 5 at 0052B232 | 0052B330 -> 006E65C0 @
   0052B55C; literal 5 at 0052B52A

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 5 at 0052B230 | 0052B330 -> 006E65C0 @
   0052B55C; literal 5 at 0052B528

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 1 at 0052B229 | 0052B330 -> 006E65C0 @
   0052B55C; literal 1 at 0052B520 */

undefined4 __thiscall
FUN_006e65c0(void *this,undefined4 param_1,char param_2,float param_3,float param_4,ushort param_5,
            ushort param_6,ushort param_7)

{
  undefined4 *puVar1;

  puVar1 = Library::DKW::LIB::FUN_006aac10(0x1c);
  if (puVar1 == nullptr) {
    return 0xfffffffe;
  }
  puVar1[6] = param_1;
  *(char *)((int)puVar1 + 0x17) = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(ushort *)((int)puVar1 + 0xe) = param_5;
  *(ushort *)(puVar1 + 4) = param_6;
  *(ushort *)((int)puVar1 + 0x12) = param_7;
  FUN_006b9910((undefined4 *)((int)this + 0x442),(int)puVar1);
  return 0;
}

