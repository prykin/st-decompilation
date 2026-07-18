FUN_006f85a0:
006F85A0  55                        PUSH EBP
006F85A1  8B EC                     MOV EBP,ESP
006F85A3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006F85A6  48                        DEC EAX
006F85A7  0F 88 AB 00 00 00         JS 0x006f8658
006F85AD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F85B0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F85B3  53                        PUSH EBX
006F85B4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F85B7  40                        INC EAX
006F85B8  56                        PUSH ESI
006F85B9  57                        PUSH EDI
006F85BA  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_006f85bd:
006F85BD  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F85C0  33 C0                     XOR EAX,EAX
006F85C2  8A 03                     MOV AL,byte ptr [EBX]
006F85C4  43                        INC EBX
006F85C5  85 C0                     TEST EAX,EAX
006F85C7  74 75                     JZ 0x006f863e
LAB_006f85c9:
006F85C9  A8 80                     TEST AL,0x80
006F85CB  74 4A                     JZ 0x006f8617
006F85CD  8B F0                     MOV ESI,EAX
006F85CF  83 E6 3F                  AND ESI,0x3f
006F85D2  2B FE                     SUB EDI,ESI
006F85D4  A8 40                     TEST AL,0x40
006F85D6  74 1F                     JZ 0x006f85f7
006F85D8  43                        INC EBX
006F85D9  4E                        DEC ESI
006F85DA  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
006F85DD  78 41                     JS 0x006f8620
006F85DF  46                        INC ESI
LAB_006f85e0:
006F85E0  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F85E3  33 C0                     XOR EAX,EAX
006F85E5  8A 02                     MOV AL,byte ptr [EDX]
006F85E7  41                        INC ECX
006F85E8  42                        INC EDX
006F85E9  4E                        DEC ESI
006F85EA  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006F85ED  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
006F85F0  75 EE                     JNZ 0x006f85e0
006F85F2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F85F5  EB 29                     JMP 0x006f8620
LAB_006f85f7:
006F85F7  4E                        DEC ESI
006F85F8  78 26                     JS 0x006f8620
006F85FA  46                        INC ESI
006F85FB  03 DE                     ADD EBX,ESI
006F85FD  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
LAB_006f8600:
006F8600  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F8603  33 C0                     XOR EAX,EAX
006F8605  8A 02                     MOV AL,byte ptr [EDX]
006F8607  41                        INC ECX
006F8608  42                        INC EDX
006F8609  4E                        DEC ESI
006F860A  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006F860D  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
006F8610  75 EE                     JNZ 0x006f8600
006F8612  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F8615  EB 09                     JMP 0x006f8620
LAB_006f8617:
006F8617  83 E0 7F                  AND EAX,0x7f
006F861A  2B F8                     SUB EDI,EAX
006F861C  03 C8                     ADD ECX,EAX
006F861E  03 D0                     ADD EDX,EAX
LAB_006f8620:
006F8620  85 FF                     TEST EDI,EDI
006F8622  7E 07                     JLE 0x006f862b
006F8624  33 C0                     XOR EAX,EAX
006F8626  8A 03                     MOV AL,byte ptr [EBX]
006F8628  43                        INC EBX
006F8629  EB 9E                     JMP 0x006f85c9
LAB_006f862b:
006F862B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F862E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F8631  2B F0                     SUB ESI,EAX
006F8633  03 CE                     ADD ECX,ESI
006F8635  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006F8638  2B F0                     SUB ESI,EAX
006F863A  03 D6                     ADD EDX,ESI
006F863C  EB 0A                     JMP 0x006f8648
LAB_006f863e:
006F863E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F8641  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F8644  03 CE                     ADD ECX,ESI
006F8646  03 D0                     ADD EDX,EAX
LAB_006f8648:
006F8648  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006F864B  48                        DEC EAX
006F864C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006F864F  0F 85 68 FF FF FF         JNZ 0x006f85bd
006F8655  5F                        POP EDI
006F8656  5E                        POP ESI
006F8657  5B                        POP EBX
LAB_006f8658:
006F8658  5D                        POP EBP
006F8659  C2 20 00                  RET 0x20
