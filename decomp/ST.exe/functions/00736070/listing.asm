FUN_00736070:
00736070  55                        PUSH EBP
00736071  8B EC                     MOV EBP,ESP
00736073  81 7D 0C 00 00 F0 7F      CMP dword ptr [EBP + 0xc],0x7ff00000
0073607A  75 0D                     JNZ 0x00736089
0073607C  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00736080  75 07                     JNZ 0x00736089
00736082  B8 01 00 00 00            MOV EAX,0x1
00736087  EB 61                     JMP 0x007360ea
LAB_00736089:
00736089  81 7D 0C 00 00 F0 FF      CMP dword ptr [EBP + 0xc],0xfff00000
00736090  75 0D                     JNZ 0x0073609f
00736092  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00736096  75 07                     JNZ 0x0073609f
00736098  B8 02 00 00 00            MOV EAX,0x2
0073609D  EB 4B                     JMP 0x007360ea
LAB_0073609f:
0073609F  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
007360A2  25 FF FF 00 00            AND EAX,0xffff
007360A7  25 F8 7F 00 00            AND EAX,0x7ff8
007360AC  3D F8 7F 00 00            CMP EAX,0x7ff8
007360B1  75 07                     JNZ 0x007360ba
007360B3  B8 03 00 00 00            MOV EAX,0x3
007360B8  EB 30                     JMP 0x007360ea
LAB_007360ba:
007360BA  8B 4D 0E                  MOV ECX,dword ptr [EBP + 0xe]
007360BD  81 E1 FF FF 00 00         AND ECX,0xffff
007360C3  81 E1 F8 7F 00 00         AND ECX,0x7ff8
007360C9  81 F9 F0 7F 00 00         CMP ECX,0x7ff0
007360CF  75 17                     JNZ 0x007360e8
007360D1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007360D4  C1 E2 0D                  SHL EDX,0xd
007360D7  85 D2                     TEST EDX,EDX
007360D9  75 06                     JNZ 0x007360e1
007360DB  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007360DF  74 07                     JZ 0x007360e8
LAB_007360e1:
007360E1  B8 04 00 00 00            MOV EAX,0x4
007360E6  EB 02                     JMP 0x007360ea
LAB_007360e8:
007360E8  33 C0                     XOR EAX,EAX
LAB_007360ea:
007360EA  5D                        POP EBP
007360EB  C3                        RET
