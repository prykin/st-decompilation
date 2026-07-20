
void __thiscall FUN_00566970(void *this,int param_1,int param_2)

{
  LPSTR pCVar1;
  int iVar2;
  char *text;
  undefined4 *puVar3;
  
  if (((*(int *)((int)this + 0x18) != 0) && (iVar2 = *(int *)((int)this + 0x28), iVar2 != 0)) &&
     (-1 < param_1)) {
    switch(*(undefined1 *)((int)this + 0x38)) {
    case 0:
    case 1:
      if (*(int *)((int)this + 0x2c) <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_PEACE_0079b014;
      break;
    case 2:
      if (*(int *)((int)this + 0x30) <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_PWAR_0079b018;
      break;
    case 3:
      if (*(int *)((int)this + 0x34) <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_WAR_0079b01c;
      break;
    default:
      goto switchD_005669a6_default;
    }
    puVar3 = (undefined4 *)0x0;
    pCVar1 = FUN_006f2c00(text,3,iVar2);
    iVar2 = thunk_FUN_0056a2a0(&g_sound,*(cMf32 **)((int)this + 0x18),pCVar1,param_2,puVar3);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 0x39) == param_1) {
        *(int *)((int)this + 0x39) = param_1;
        *(int *)((int)this + 0x3d) = *(int *)((int)this + 0x3d) + 1;
        return;
      }
      *(undefined4 *)((int)this + 0x3d) = 1;
      *(int *)((int)this + 0x39) = param_1;
    }
  }
switchD_005669a6_default:
  return;
}

