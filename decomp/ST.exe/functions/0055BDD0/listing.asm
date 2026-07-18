FUN_0055bdd0:
0055BDD0  55                        PUSH EBP
0055BDD1  8B EC                     MOV EBP,ESP
0055BDD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055BDD6  85 C0                     TEST EAX,EAX
0055BDD8  74 6D                     JZ 0x0055be47
0055BDDA  56                        PUSH ESI
0055BDDB  57                        PUSH EDI
0055BDDC  6A 20                     PUSH 0x20
0055BDDE  50                        PUSH EAX
0055BDDF  68 3A F3 80 00            PUSH 0x80f33a
0055BDE4  E8 57 25 1D 00            CALL 0x0072e340
0055BDE9  BF CC 94 7C 00            MOV EDI,0x7c94cc
0055BDEE  83 C9 FF                  OR ECX,0xffffffff
0055BDF1  33 C0                     XOR EAX,EAX
0055BDF3  F2 AE                     SCASB.REPNE ES:EDI
0055BDF5  F7 D1                     NOT ECX
0055BDF7  2B F9                     SUB EDI,ECX
0055BDF9  8B F7                     MOV ESI,EDI
0055BDFB  8B D1                     MOV EDX,ECX
0055BDFD  BF 3A F3 80 00            MOV EDI,0x80f33a
0055BE02  83 C9 FF                  OR ECX,0xffffffff
0055BE05  F2 AE                     SCASB.REPNE ES:EDI
0055BE07  8B CA                     MOV ECX,EDX
0055BE09  4F                        DEC EDI
0055BE0A  C1 E9 02                  SHR ECX,0x2
0055BE0D  F3 A5                     MOVSD.REP ES:EDI,ESI
0055BE0F  8B CA                     MOV ECX,EDX
0055BE11  83 E1 03                  AND ECX,0x3
0055BE14  F3 A4                     MOVSB.REP ES:EDI,ESI
0055BE16  BF CC 94 7C 00            MOV EDI,0x7c94cc
0055BE1B  83 C9 FF                  OR ECX,0xffffffff
0055BE1E  F2 AE                     SCASB.REPNE ES:EDI
0055BE20  F7 D1                     NOT ECX
0055BE22  49                        DEC ECX
0055BE23  B8 14 08 00 00            MOV EAX,0x814
0055BE28  2B C1                     SUB EAX,ECX
0055BE2A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055BE2D  50                        PUSH EAX
0055BE2E  51                        PUSH ECX
0055BE2F  68 3A F3 80 00            PUSH 0x80f33a
0055BE34  E8 17 2F 1D 00            CALL 0x0072ed50
0055BE39  83 C4 18                  ADD ESP,0x18
0055BE3C  C6 05 6D FB 80 00 00      MOV byte ptr [0x0080fb6d],0x0
0055BE43  5F                        POP EDI
0055BE44  5E                        POP ESI
0055BE45  EB 1D                     JMP 0x0055be64
LAB_0055be47:
0055BE47  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055BE4A  68 34 08 00 00            PUSH 0x834
0055BE4F  52                        PUSH EDX
0055BE50  68 3A F3 80 00            PUSH 0x80f33a
0055BE55  E8 E6 24 1D 00            CALL 0x0072e340
0055BE5A  83 C4 0C                  ADD ESP,0xc
0055BE5D  C6 05 6D FB 80 00 00      MOV byte ptr [0x0080fb6d],0x0
LAB_0055be64:
0055BE64  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0055BE6A  85 C9                     TEST ECX,ECX
0055BE6C  74 0C                     JZ 0x0055be7a
0055BE6E  6A 08                     PUSH 0x8
0055BE70  68 3A F3 80 00            PUSH 0x80f33a
0055BE75  E8 5E 56 EA FF            CALL 0x004014d8
LAB_0055be7a:
0055BE7A  5D                        POP EBP
0055BE7B  C2 08 00                  RET 0x8
