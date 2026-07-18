FUN_00571240:
00571240  55                        PUSH EBP
00571241  8B EC                     MOV EBP,ESP
00571243  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00571246  56                        PUSH ESI
00571247  85 C0                     TEST EAX,EAX
00571249  74 33                     JZ 0x0057127e
0057124B  A0 4E 87 80 00            MOV AL,[0x0080874e]
00571250  84 C0                     TEST AL,AL
00571252  75 07                     JNZ 0x0057125b
00571254  B8 01 00 00 00            MOV EAX,0x1
00571259  EB 06                     JMP 0x00571261
LAB_0057125b:
0057125B  33 C9                     XOR ECX,ECX
0057125D  8A C8                     MOV CL,AL
0057125F  8B C1                     MOV EAX,ECX
LAB_00571261:
00571261  33 D2                     XOR EDX,EDX
00571263  50                        PUSH EAX
00571264  8A 15 A1 67 80 00         MOV DL,byte ptr [0x008067a1]
0057126A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057126D  C1 E2 09                  SHL EDX,0x9
00571270  50                        PUSH EAX
00571271  68 54 A2 7C 00            PUSH 0x7ca254
00571276  8D B2 20 35 80 00         LEA ESI,[EDX + 0x803520]
0057127C  EB 3D                     JMP 0x005712bb
LAB_0057127e:
0057127E  33 C0                     XOR EAX,EAX
00571280  A0 4E 87 80 00            MOV AL,[0x0080874e]
00571285  83 E8 02                  SUB EAX,0x2
00571288  74 11                     JZ 0x0057129b
0057128A  48                        DEC EAX
0057128B  74 07                     JZ 0x00571294
0057128D  B8 50 A2 7C 00            MOV EAX,0x7ca250
00571292  EB 0C                     JMP 0x005712a0
LAB_00571294:
00571294  B8 4C A2 7C 00            MOV EAX,0x7ca24c
00571299  EB 05                     JMP 0x005712a0
LAB_0057129b:
0057129B  B8 48 A2 7C 00            MOV EAX,0x7ca248
LAB_005712a0:
005712A0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005712A3  33 C9                     XOR ECX,ECX
005712A5  8A 0D A1 67 80 00         MOV CL,byte ptr [0x008067a1]
005712AB  50                        PUSH EAX
005712AC  C1 E1 09                  SHL ECX,0x9
005712AF  52                        PUSH EDX
005712B0  68 40 A2 7C 00            PUSH 0x7ca240
005712B5  8D B1 20 35 80 00         LEA ESI,[ECX + 0x803520]
LAB_005712bb:
005712BB  56                        PUSH ESI
005712BC  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005712C2  A0 A1 67 80 00            MOV AL,[0x008067a1]
005712C7  83 C4 10                  ADD ESP,0x10
005712CA  3C 18                     CMP AL,0x18
005712CC  75 0C                     JNZ 0x005712da
005712CE  8B C6                     MOV EAX,ESI
005712D0  C6 05 A1 67 80 00 00      MOV byte ptr [0x008067a1],0x0
005712D7  5E                        POP ESI
005712D8  5D                        POP EBP
005712D9  C3                        RET
LAB_005712da:
005712DA  A0 A1 67 80 00            MOV AL,[0x008067a1]
005712DF  FE C0                     INC AL
005712E1  A2 A1 67 80 00            MOV [0x008067a1],AL
005712E6  8B C6                     MOV EAX,ESI
005712E8  5E                        POP ESI
005712E9  5D                        POP EBP
005712EA  C3                        RET
