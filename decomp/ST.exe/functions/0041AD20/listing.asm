FUN_0041ad20:
0041AD20  55                        PUSH EBP
0041AD21  8B EC                     MOV EBP,ESP
0041AD23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041AD26  8B 00                     MOV EAX,dword ptr [EAX]
0041AD28  85 C0                     TEST EAX,EAX
0041AD2A  74 07                     JZ 0x0041ad33
0041AD2C  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
LAB_0041ad33:
0041AD33  5D                        POP EBP
0041AD34  C2 04 00                  RET 0x4
