
undefined4 __fastcall FUN_00419c70(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  
  uVar1 = STAllPlayersC::RegisterObject
                    (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)param_2 >> 8),(char)param_1[9]),
                     CONCAT22((short)((uint)param_1 >> 0x10),(short)param_1[0xc]),0xffff,param_1,
                     param_3,0);
  STAllPlayersC::_ChangeMD
            (g_sTAllPlayers_007FA174,1,(int *)param_1[9],
             CONCAT22((short)((uint)uVar1 >> 0x10),*(undefined2 *)((int)param_1 + 0x32)));
  STAllPlayersC::_ChangeDock
            (1,(int *)param_1[9],CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x32)));
  return uVar1;
}

