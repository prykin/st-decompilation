FUN_004e5e30:
004E5E30  55                        PUSH EBP
004E5E31  8B EC                     MOV EBP,ESP
004E5E33  51                        PUSH ECX
004E5E34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5E37  53                        PUSH EBX
004E5E38  33 DB                     XOR EBX,EBX
004E5E3A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004E5E3D  85 C0                     TEST EAX,EAX
004E5E3F  7C 39                     JL 0x004e5e7a
004E5E41  83 F8 08                  CMP EAX,0x8
004E5E44  7D 34                     JGE 0x004e5e7a
004E5E46  56                        PUSH ESI
004E5E47  57                        PUSH EDI
004E5E48  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E5E4B  33 F6                     XOR ESI,ESI
004E5E4D  EB 03                     JMP 0x004e5e52
LAB_004e5e4f:
004E5E4F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_004e5e52:
004E5E52  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E5E55  56                        PUSH ESI
004E5E56  50                        PUSH EAX
004E5E57  E8 3A D5 F1 FF            CALL 0x00403396
004E5E5C  85 C0                     TEST EAX,EAX
004E5E5E  74 06                     JZ 0x004e5e66
004E5E60  89 37                     MOV dword ptr [EDI],ESI
004E5E62  43                        INC EBX
004E5E63  83 C7 04                  ADD EDI,0x4
LAB_004e5e66:
004E5E66  46                        INC ESI
004E5E67  81 FE 9B 00 00 00         CMP ESI,0x9b
004E5E6D  7C E0                     JL 0x004e5e4f
004E5E6F  5F                        POP EDI
004E5E70  8B C3                     MOV EAX,EBX
004E5E72  5E                        POP ESI
004E5E73  5B                        POP EBX
004E5E74  8B E5                     MOV ESP,EBP
004E5E76  5D                        POP EBP
004E5E77  C2 08 00                  RET 0x8
LAB_004e5e7a:
004E5E7A  33 C0                     XOR EAX,EAX
004E5E7C  5B                        POP EBX
004E5E7D  8B E5                     MOV ESP,EBP
004E5E7F  5D                        POP EBP
004E5E80  C2 08 00                  RET 0x8
