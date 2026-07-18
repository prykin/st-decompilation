FUN_004e7d70:
004E7D70  55                        PUSH EBP
004E7D71  8B EC                     MOV EBP,ESP
004E7D73  51                        PUSH ECX
004E7D74  53                        PUSH EBX
004E7D75  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E7D78  85 DB                     TEST EBX,EBX
004E7D7A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004E7D7D  7C 5A                     JL 0x004e7dd9
004E7D7F  83 FB 08                  CMP EBX,0x8
004E7D82  7D 55                     JGE 0x004e7dd9
004E7D84  57                        PUSH EDI
004E7D85  53                        PUSH EBX
004E7D86  E8 2C CC F1 FF            CALL 0x004049b7
004E7D8B  25 FF 00 00 00            AND EAX,0xff
004E7D90  48                        DEC EAX
004E7D91  8B F8                     MOV EDI,EAX
004E7D93  8B 04 BD C8 0D 7C 00      MOV EAX,dword ptr [EDI*0x4 + 0x7c0dc8]
004E7D9A  83 38 00                  CMP dword ptr [EAX],0x0
004E7D9D  74 30                     JZ 0x004e7dcf
004E7D9F  56                        PUSH ESI
004E7DA0  33 F6                     XOR ESI,ESI
LAB_004e7da2:
004E7DA2  8B 4C 06 05               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x5]
004E7DA6  85 C9                     TEST ECX,ECX
004E7DA8  75 14                     JNZ 0x004e7dbe
004E7DAA  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
004E7DAD  33 C9                     XOR ECX,ECX
004E7DAF  8A 4C 06 04               MOV CL,byte ptr [ESI + EAX*0x1 + 0x4]
004E7DB3  51                        PUSH ECX
004E7DB4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7DB7  52                        PUSH EDX
004E7DB8  53                        PUSH EBX
004E7DB9  E8 F0 AC F1 FF            CALL 0x00402aae
LAB_004e7dbe:
004E7DBE  8B 04 BD C8 0D 7C 00      MOV EAX,dword ptr [EDI*0x4 + 0x7c0dc8]
004E7DC5  83 C6 19                  ADD ESI,0x19
004E7DC8  83 3C 06 00               CMP dword ptr [ESI + EAX*0x1],0x0
004E7DCC  75 D4                     JNZ 0x004e7da2
004E7DCE  5E                        POP ESI
LAB_004e7dcf:
004E7DCF  5F                        POP EDI
004E7DD0  33 C0                     XOR EAX,EAX
004E7DD2  5B                        POP EBX
004E7DD3  8B E5                     MOV ESP,EBP
004E7DD5  5D                        POP EBP
004E7DD6  C2 04 00                  RET 0x4
LAB_004e7dd9:
004E7DD9  33 C0                     XOR EAX,EAX
004E7DDB  5B                        POP EBX
004E7DDC  8B E5                     MOV ESP,EBP
004E7DDE  5D                        POP EBP
004E7DDF  C2 04 00                  RET 0x4
