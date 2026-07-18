FUN_006b7400:
006B7400  55                        PUSH EBP
006B7401  8B EC                     MOV EBP,ESP
006B7403  53                        PUSH EBX
006B7404  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B7407  56                        PUSH ESI
006B7408  81 FB 80 00 00 00         CMP EBX,0x80
006B740E  57                        PUSH EDI
006B740F  7C 06                     JL 0x006b7417
006B7411  81 EB 80 00 00 00         SUB EBX,0x80
LAB_006b7417:
006B7417  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B741A  56                        PUSH ESI
006B741B  E8 70 FD FF FF            CALL 0x006b7190
006B7420  8B F8                     MOV EDI,EAX
006B7422  85 FF                     TEST EDI,EDI
006B7424  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B7427  0F 85 B4 00 00 00         JNZ 0x006b74e1
006B742D  83 C6 44                  ADD ESI,0x44
006B7430  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006B7433  8B 36                     MOV ESI,dword ptr [ESI]
006B7435  85 F6                     TEST ESI,ESI
006B7437  74 51                     JZ 0x006b748a
006B7439  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B743C  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006b743f:
006B743F  83 FB FF                  CMP EBX,-0x1
006B7442  74 59                     JZ 0x006b749d
006B7444  85 DB                     TEST EBX,EBX
006B7446  7C 3C                     JL 0x006b7484
006B7448  85 C9                     TEST ECX,ECX
006B744A  74 19                     JZ 0x006b7465
006B744C  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006B744F  3B 78 01                  CMP EDI,dword ptr [EAX + 0x1]
006B7452  74 30                     JZ 0x006b7484
006B7454  8A 00                     MOV AL,byte ptr [EAX]
006B7456  3A C3                     CMP AL,BL
006B7458  74 2A                     JZ 0x006b7484
006B745A  8A D3                     MOV DL,BL
006B745C  80 C2 80                  ADD DL,0x80
006B745F  3A C2                     CMP AL,DL
006B7461  75 3A                     JNZ 0x006b749d
006B7463  EB 1F                     JMP 0x006b7484
LAB_006b7465:
006B7465  83 FF FF                  CMP EDI,-0x1
006B7468  74 08                     JZ 0x006b7472
006B746A  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006B746D  3B 78 01                  CMP EDI,dword ptr [EAX + 0x1]
006B7470  75 12                     JNZ 0x006b7484
LAB_006b7472:
006B7472  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B7475  8A 02                     MOV AL,byte ptr [EDX]
006B7477  3A C3                     CMP AL,BL
006B7479  74 22                     JZ 0x006b749d
006B747B  8A D3                     MOV DL,BL
006B747D  80 C2 80                  ADD DL,0x80
006B7480  3A C2                     CMP AL,DL
006B7482  74 19                     JZ 0x006b749d
LAB_006b7484:
006B7484  8B 36                     MOV ESI,dword ptr [ESI]
006B7486  85 F6                     TEST ESI,ESI
006B7488  75 B5                     JNZ 0x006b743f
LAB_006b748a:
006B748A  C7 45 0C FC FF FF FF      MOV dword ptr [EBP + 0xc],0xfffffffc
006B7491  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B7494  8B C7                     MOV EAX,EDI
006B7496  5F                        POP EDI
006B7497  5E                        POP ESI
006B7498  5B                        POP EBX
006B7499  5D                        POP EBP
006B749A  C2 1C 00                  RET 0x1c
LAB_006b749d:
006B749D  85 F6                     TEST ESI,ESI
006B749F  74 E9                     JZ 0x006b748a
006B74A1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B74A4  85 C0                     TEST EAX,EAX
006B74A6  74 05                     JZ 0x006b74ad
006B74A8  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B74AB  89 08                     MOV dword ptr [EAX],ECX
LAB_006b74ad:
006B74AD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B74B0  85 C0                     TEST EAX,EAX
006B74B2  74 05                     JZ 0x006b74b9
006B74B4  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006B74B7  89 10                     MOV dword ptr [EAX],EDX
LAB_006b74b9:
006B74B9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B74BC  85 C0                     TEST EAX,EAX
006B74BE  74 05                     JZ 0x006b74c5
006B74C0  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006B74C3  89 08                     MOV dword ptr [EAX],ECX
LAB_006b74c5:
006B74C5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B74C8  56                        PUSH ESI
006B74C9  52                        PUSH EDX
006B74CA  E8 91 B0 01 00            CALL 0x006d2560
006B74CF  56                        PUSH ESI
006B74D0  E8 BB E9 FE FF            CALL 0x006a5e90
006B74D5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B74D8  8B C7                     MOV EAX,EDI
006B74DA  5F                        POP EDI
006B74DB  5E                        POP ESI
006B74DC  5B                        POP EBX
006B74DD  5D                        POP EBP
006B74DE  C2 1C 00                  RET 0x1c
LAB_006b74e1:
006B74E1  83 FF FC                  CMP EDI,-0x4
006B74E4  74 16                     JZ 0x006b74fc
006B74E6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B74EB  68 31 04 00 00            PUSH 0x431
006B74F0  68 C4 DB 7E 00            PUSH 0x7edbc4
006B74F5  50                        PUSH EAX
006B74F6  57                        PUSH EDI
006B74F7  E8 44 E9 FE FF            CALL 0x006a5e40
LAB_006b74fc:
006B74FC  8B C7                     MOV EAX,EDI
006B74FE  5F                        POP EDI
006B74FF  5E                        POP ESI
006B7500  5B                        POP EBX
006B7501  5D                        POP EBP
006B7502  C2 1C 00                  RET 0x1c
