FUN_004e5cc0:
004E5CC0  55                        PUSH EBP
004E5CC1  8B EC                     MOV EBP,ESP
004E5CC3  51                        PUSH ECX
004E5CC4  53                        PUSH EBX
004E5CC5  57                        PUSH EDI
004E5CC6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E5CC9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004E5CCC  85 FF                     TEST EDI,EDI
004E5CCE  7C 49                     JL 0x004e5d19
004E5CD0  83 FF 08                  CMP EDI,0x8
004E5CD3  7D 44                     JGE 0x004e5d19
004E5CD5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E5CD8  83 FB 01                  CMP EBX,0x1
004E5CDB  7C 3C                     JL 0x004e5d19
004E5CDD  81 FB 9B 00 00 00         CMP EBX,0x9b
004E5CE3  7D 34                     JGE 0x004e5d19
004E5CE5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E5CE8  85 C0                     TEST EAX,EAX
004E5CEA  7C 2D                     JL 0x004e5d19
004E5CEC  56                        PUSH ESI
004E5CED  53                        PUSH EBX
004E5CEE  57                        PUSH EDI
004E5CEF  E8 A2 D6 F1 FF            CALL 0x00403396
004E5CF4  8B F0                     MOV ESI,EAX
004E5CF6  85 F6                     TEST ESI,ESI
004E5CF8  74 14                     JZ 0x004e5d0e
004E5CFA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E5CFD  53                        PUSH EBX
004E5CFE  57                        PUSH EDI
004E5CFF  E8 67 BB F1 FF            CALL 0x0040186b
004E5D04  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E5D07  40                        INC EAX
004E5D08  3B C8                     CMP ECX,EAX
004E5D0A  74 02                     JZ 0x004e5d0e
004E5D0C  33 F6                     XOR ESI,ESI
LAB_004e5d0e:
004E5D0E  8B C6                     MOV EAX,ESI
004E5D10  5E                        POP ESI
004E5D11  5F                        POP EDI
004E5D12  5B                        POP EBX
004E5D13  8B E5                     MOV ESP,EBP
004E5D15  5D                        POP EBP
004E5D16  C2 0C 00                  RET 0xc
LAB_004e5d19:
004E5D19  5F                        POP EDI
004E5D1A  33 C0                     XOR EAX,EAX
004E5D1C  5B                        POP EBX
004E5D1D  8B E5                     MOV ESP,EBP
004E5D1F  5D                        POP EBP
004E5D20  C2 0C 00                  RET 0xc
