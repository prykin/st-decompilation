FUN_0057f240:
0057F240  55                        PUSH EBP
0057F241  8B EC                     MOV EBP,ESP
0057F243  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0057F246  33 C0                     XOR EAX,EAX
0057F248  81 E9 DD 00 00 00         SUB ECX,0xdd
0057F24E  74 4B                     JZ 0x0057f29b
0057F250  49                        DEC ECX
0057F251  74 25                     JZ 0x0057f278
0057F253  83 E9 02                  SUB ECX,0x2
0057F256  75 62                     JNZ 0x0057f2ba
0057F258  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057F25B  85 C0                     TEST EAX,EAX
0057F25D  7F 09                     JG 0x0057f268
0057F25F  B8 02 00 00 00            MOV EAX,0x2
0057F264  5D                        POP EBP
0057F265  C2 08 00                  RET 0x8
LAB_0057f268:
0057F268  33 C9                     XOR ECX,ECX
0057F26A  3D 20 4E 00 00            CMP EAX,0x4e20
0057F26F  0F 9E C1                  SETLE CL
0057F272  8B C1                     MOV EAX,ECX
0057F274  5D                        POP EBP
0057F275  C2 08 00                  RET 0x8
LAB_0057f278:
0057F278  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057F27B  3D 10 27 00 00            CMP EAX,0x2710
0057F280  7F 09                     JG 0x0057f28b
0057F282  B8 02 00 00 00            MOV EAX,0x2
0057F287  5D                        POP EBP
0057F288  C2 08 00                  RET 0x8
LAB_0057f28b:
0057F28B  33 D2                     XOR EDX,EDX
0057F28D  3D 40 9C 00 00            CMP EAX,0x9c40
0057F292  0F 9E C2                  SETLE DL
0057F295  8B C2                     MOV EAX,EDX
0057F297  5D                        POP EBP
0057F298  C2 08 00                  RET 0x8
LAB_0057f29b:
0057F29B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057F29E  3D 88 13 00 00            CMP EAX,0x1388
0057F2A3  7F 09                     JG 0x0057f2ae
0057F2A5  B8 02 00 00 00            MOV EAX,0x2
0057F2AA  5D                        POP EBP
0057F2AB  C2 08 00                  RET 0x8
LAB_0057f2ae:
0057F2AE  33 C9                     XOR ECX,ECX
0057F2B0  3D 10 27 00 00            CMP EAX,0x2710
0057F2B5  0F 9E C1                  SETLE CL
0057F2B8  8B C1                     MOV EAX,ECX
LAB_0057f2ba:
0057F2BA  5D                        POP EBP
0057F2BB  C2 08 00                  RET 0x8
