FUN_006b7510:
006B7510  55                        PUSH EBP
006B7511  8B EC                     MOV EBP,ESP
006B7513  56                        PUSH ESI
006B7514  57                        PUSH EDI
006B7515  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B7518  57                        PUSH EDI
006B7519  E8 72 FC FF FF            CALL 0x006b7190
006B751E  8B F0                     MOV ESI,EAX
006B7520  85 F6                     TEST ESI,ESI
006B7522  75 79                     JNZ 0x006b759d
006B7524  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B7527  3D 80 00 00 00            CMP EAX,0x80
006B752C  7C 05                     JL 0x006b7533
006B752E  2D 80 00 00 00            SUB EAX,0x80
LAB_006b7533:
006B7533  8B 77 44                  MOV ESI,dword ptr [EDI + 0x44]
006B7536  33 D2                     XOR EDX,EDX
006B7538  85 F6                     TEST ESI,ESI
006B753A  74 54                     JZ 0x006b7590
006B753C  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B753F  53                        PUSH EBX
LAB_006b7540:
006B7540  83 F8 FF                  CMP EAX,-0x1
006B7543  74 43                     JZ 0x006b7588
006B7545  85 C0                     TEST EAX,EAX
006B7547  7C 40                     JL 0x006b7589
006B7549  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B754C  85 C9                     TEST ECX,ECX
006B754E  74 19                     JZ 0x006b7569
006B7550  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006B7553  3B 79 01                  CMP EDI,dword ptr [ECX + 0x1]
006B7556  74 31                     JZ 0x006b7589
006B7558  8A 09                     MOV CL,byte ptr [ECX]
006B755A  3A C8                     CMP CL,AL
006B755C  74 2B                     JZ 0x006b7589
006B755E  8A D8                     MOV BL,AL
006B7560  80 C3 80                  ADD BL,0x80
006B7563  3A CB                     CMP CL,BL
006B7565  74 22                     JZ 0x006b7589
006B7567  EB 1F                     JMP 0x006b7588
LAB_006b7569:
006B7569  83 FF FF                  CMP EDI,-0x1
006B756C  74 08                     JZ 0x006b7576
006B756E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006B7571  3B 79 01                  CMP EDI,dword ptr [ECX + 0x1]
006B7574  75 13                     JNZ 0x006b7589
LAB_006b7576:
006B7576  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006B7579  8A 09                     MOV CL,byte ptr [ECX]
006B757B  3A C8                     CMP CL,AL
006B757D  74 09                     JZ 0x006b7588
006B757F  8A D8                     MOV BL,AL
006B7581  80 C3 80                  ADD BL,0x80
006B7584  3A CB                     CMP CL,BL
006B7586  75 01                     JNZ 0x006b7589
LAB_006b7588:
006B7588  42                        INC EDX
LAB_006b7589:
006B7589  8B 36                     MOV ESI,dword ptr [ESI]
006B758B  85 F6                     TEST ESI,ESI
006B758D  75 B1                     JNZ 0x006b7540
006B758F  5B                        POP EBX
LAB_006b7590:
006B7590  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B7593  5F                        POP EDI
006B7594  5E                        POP ESI
006B7595  89 10                     MOV dword ptr [EAX],EDX
006B7597  33 C0                     XOR EAX,EAX
006B7599  5D                        POP EBP
006B759A  C2 14 00                  RET 0x14
LAB_006b759d:
006B759D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B75A3  68 5F 04 00 00            PUSH 0x45f
006B75A8  68 C4 DB 7E 00            PUSH 0x7edbc4
006B75AD  51                        PUSH ECX
006B75AE  56                        PUSH ESI
006B75AF  E8 8C E8 FE FF            CALL 0x006a5e40
006B75B4  8B C6                     MOV EAX,ESI
006B75B6  5F                        POP EDI
006B75B7  5E                        POP ESI
006B75B8  5D                        POP EBP
006B75B9  C2 14 00                  RET 0x14
