
void FUN_00440700(int param_1)

{
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = (param_1 != 0) + 0x112;
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

