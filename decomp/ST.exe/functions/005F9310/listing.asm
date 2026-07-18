FUN_005f9310:
005F9310  55                        PUSH EBP
005F9311  8B EC                     MOV EBP,ESP
005F9313  53                        PUSH EBX
005F9314  56                        PUSH ESI
005F9315  57                        PUSH EDI
005F9316  8B F9                     MOV EDI,ECX
005F9318  B8 79 19 8C 02            MOV EAX,0x28c1979
005F931D  8B 8F C1 02 00 00         MOV ECX,dword ptr [EDI + 0x2c1]
005F9323  85 C9                     TEST ECX,ECX
005F9325  7C 10                     JL 0x005f9337
005F9327  F7 E9                     IMUL ECX
005F9329  D1 FA                     SAR EDX,0x1
005F932B  8B C2                     MOV EAX,EDX
005F932D  C1 E8 1F                  SHR EAX,0x1f
005F9330  03 D0                     ADD EDX,EAX
005F9332  0F BF DA                  MOVSX EBX,DX
005F9335  EB 0F                     JMP 0x005f9346
LAB_005f9337:
005F9337  F7 E9                     IMUL ECX
005F9339  D1 FA                     SAR EDX,0x1
005F933B  8B CA                     MOV ECX,EDX
005F933D  C1 E9 1F                  SHR ECX,0x1f
005F9340  03 D1                     ADD EDX,ECX
005F9342  0F BF DA                  MOVSX EBX,DX
005F9345  4B                        DEC EBX
LAB_005f9346:
005F9346  8B 8F C5 02 00 00         MOV ECX,dword ptr [EDI + 0x2c5]
005F934C  B8 79 19 8C 02            MOV EAX,0x28c1979
005F9351  85 C9                     TEST ECX,ECX
005F9353  7C 10                     JL 0x005f9365
005F9355  F7 E9                     IMUL ECX
005F9357  D1 FA                     SAR EDX,0x1
005F9359  8B C2                     MOV EAX,EDX
005F935B  C1 E8 1F                  SHR EAX,0x1f
005F935E  03 D0                     ADD EDX,EAX
005F9360  0F BF F2                  MOVSX ESI,DX
005F9363  EB 0F                     JMP 0x005f9374
LAB_005f9365:
005F9365  F7 E9                     IMUL ECX
005F9367  D1 FA                     SAR EDX,0x1
005F9369  8B CA                     MOV ECX,EDX
005F936B  C1 E9 1F                  SHR ECX,0x1f
005F936E  03 D1                     ADD EDX,ECX
005F9370  0F BF F2                  MOVSX ESI,DX
005F9373  4E                        DEC ESI
LAB_005f9374:
005F9374  8B 8F C9 02 00 00         MOV ECX,dword ptr [EDI + 0x2c9]
005F937A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F937F  85 C9                     TEST ECX,ECX
005F9381  7C 11                     JL 0x005f9394
005F9383  F7 E9                     IMUL ECX
005F9385  C1 FA 06                  SAR EDX,0x6
005F9388  8B C2                     MOV EAX,EDX
005F938A  C1 E8 1F                  SHR EAX,0x1f
005F938D  03 D0                     ADD EDX,EAX
005F938F  0F BF C2                  MOVSX EAX,DX
005F9392  EB 10                     JMP 0x005f93a4
LAB_005f9394:
005F9394  F7 E9                     IMUL ECX
005F9396  C1 FA 06                  SAR EDX,0x6
005F9399  8B CA                     MOV ECX,EDX
005F939B  C1 E9 1F                  SHR ECX,0x1f
005F939E  03 D1                     ADD EDX,ECX
005F93A0  0F BF C2                  MOVSX EAX,DX
005F93A3  48                        DEC EAX
LAB_005f93a4:
005F93A4  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
005F93AA  85 C9                     TEST ECX,ECX
005F93AC  74 34                     JZ 0x005f93e2
005F93AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F93B1  52                        PUSH EDX
005F93B2  8D 97 7D 02 00 00         LEA EDX,[EDI + 0x27d]
005F93B8  52                        PUSH EDX
005F93B9  50                        PUSH EAX
005F93BA  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
005F93C0  56                        PUSH ESI
005F93C1  53                        PUSH EBX
005F93C2  50                        PUSH EAX
005F93C3  E8 54 B0 E0 FF            CALL 0x0040441c
005F93C8  85 C0                     TEST EAX,EAX
005F93CA  74 16                     JZ 0x005f93e2
005F93CC  33 C0                     XOR EAX,EAX
005F93CE  C6 87 9E 02 00 00 01      MOV byte ptr [EDI + 0x29e],0x1
005F93D5  8A 87 9E 02 00 00         MOV AL,byte ptr [EDI + 0x29e]
005F93DB  5F                        POP EDI
005F93DC  5E                        POP ESI
005F93DD  5B                        POP EBX
005F93DE  5D                        POP EBP
005F93DF  C2 04 00                  RET 0x4
LAB_005f93e2:
005F93E2  8A 87 9E 02 00 00         MOV AL,byte ptr [EDI + 0x29e]
005F93E8  84 C0                     TEST AL,AL
005F93EA  74 07                     JZ 0x005f93f3
005F93EC  8B CF                     MOV ECX,EDI
005F93EE  E8 F0 B6 E0 FF            CALL 0x00404ae3
LAB_005f93f3:
005F93F3  33 C0                     XOR EAX,EAX
005F93F5  8A 87 9E 02 00 00         MOV AL,byte ptr [EDI + 0x29e]
005F93FB  5F                        POP EDI
005F93FC  5E                        POP ESI
005F93FD  5B                        POP EBX
005F93FE  5D                        POP EBP
005F93FF  C2 04 00                  RET 0x4
