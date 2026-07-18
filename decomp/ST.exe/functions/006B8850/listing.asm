FUN_006b8850:
006B8850  55                        PUSH EBP
006B8851  8B EC                     MOV EBP,ESP
006B8853  56                        PUSH ESI
006B8854  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8857  85 F6                     TEST ESI,ESI
006B8859  74 6F                     JZ 0x006b88ca
006B885B  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006B885E  85 C0                     TEST EAX,EAX
006B8860  74 0D                     JZ 0x006b886f
006B8862  8B 08                     MOV ECX,dword ptr [EAX]
006B8864  50                        PUSH EAX
006B8865  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B8868  C7 46 3C 00 00 00 00      MOV dword ptr [ESI + 0x3c],0x0
LAB_006b886f:
006B886F  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B8872  85 C0                     TEST EAX,EAX
006B8874  74 54                     JZ 0x006b88ca
006B8876  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B8879  F7 C1 00 00 00 20         TEST ECX,0x20000000
006B887F  74 12                     JZ 0x006b8893
006B8881  8B 10                     MOV EDX,dword ptr [EAX]
006B8883  50                        PUSH EAX
006B8884  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B8887  C7 46 38 00 00 00 00      MOV dword ptr [ESI + 0x38],0x0
006B888E  5E                        POP ESI
006B888F  5D                        POP EBP
006B8890  C2 04 00                  RET 0x4
LAB_006b8893:
006B8893  F7 C1 00 00 00 A0         TEST ECX,0xa0000000
006B8899  74 2F                     JZ 0x006b88ca
006B889B  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006B889E  57                        PUSH EDI
006B889F  33 FF                     XOR EDI,EDI
006B88A1  85 C0                     TEST EAX,EAX
006B88A3  7E 14                     JLE 0x006b88b9
LAB_006b88a5:
006B88A5  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B88A8  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B88AB  50                        PUSH EAX
006B88AC  8B 08                     MOV ECX,dword ptr [EAX]
006B88AE  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B88B1  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006B88B4  47                        INC EDI
006B88B5  3B F8                     CMP EDI,EAX
006B88B7  7C EC                     JL 0x006b88a5
LAB_006b88b9:
006B88B9  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006B88BC  52                        PUSH EDX
006B88BD  E8 CE D5 FE FF            CALL 0x006a5e90
006B88C2  C7 46 38 00 00 00 00      MOV dword ptr [ESI + 0x38],0x0
006B88C9  5F                        POP EDI
LAB_006b88ca:
006B88CA  5E                        POP ESI
006B88CB  5D                        POP EBP
006B88CC  C2 04 00                  RET 0x4
