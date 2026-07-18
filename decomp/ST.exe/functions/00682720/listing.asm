FUN_00682720:
00682720  55                        PUSH EBP
00682721  8B EC                     MOV EBP,ESP
00682723  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00682726  8B C1                     MOV EAX,ECX
00682728  83 E8 1C                  SUB EAX,0x1c
0068272B  74 33                     JZ 0x00682760
0068272D  48                        DEC EAX
0068272E  74 13                     JZ 0x00682743
00682730  51                        PUSH ECX
00682731  E8 A5 30 D8 FF            CALL 0x004057db
00682736  50                        PUSH EAX
00682737  6A 90                     PUSH -0x70
00682739  E8 D3 2C D8 FF            CALL 0x00405411
0068273E  83 C4 08                  ADD ESP,0x8
00682741  5D                        POP EBP
00682742  C3                        RET
LAB_00682743:
00682743  A1 18 76 80 00            MOV EAX,[0x00807618]
00682748  50                        PUSH EAX
00682749  68 5D 1B 00 00            PUSH 0x1b5d
0068274E  E8 ED D9 02 00            CALL 0x006b0140
00682753  50                        PUSH EAX
00682754  6A 90                     PUSH -0x70
00682756  E8 B6 2C D8 FF            CALL 0x00405411
0068275B  83 C4 08                  ADD ESP,0x8
0068275E  5D                        POP EBP
0068275F  C3                        RET
LAB_00682760:
00682760  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00682766  51                        PUSH ECX
00682767  68 5E 1B 00 00            PUSH 0x1b5e
0068276C  E8 CF D9 02 00            CALL 0x006b0140
00682771  50                        PUSH EAX
00682772  6A 90                     PUSH -0x70
00682774  E8 98 2C D8 FF            CALL 0x00405411
00682779  83 C4 08                  ADD ESP,0x8
0068277C  5D                        POP EBP
0068277D  C3                        RET
