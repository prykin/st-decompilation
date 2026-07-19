
void __thiscall
FUN_006e6710(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x44e);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_006e673a:
      puVar1 = Library::DKW::LIB::FUN_006aac10(0x18);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_006b9910((undefined4 *)((int)this + 0x44e),puVar1);
LAB_006e674e:
        puVar1[1] = param_5;
        lVar2 = Library::MSVCRT::__ftol();
        puVar1[2] = (int)lVar2;
        puVar1[3] = param_1;
        puVar1[4] = param_2;
        puVar1[5] = param_4;
      }
      return;
    }
    if (puVar1[1] == param_5) {
      if (puVar1 != (undefined4 *)0x0) goto LAB_006e674e;
      goto LAB_006e673a;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

