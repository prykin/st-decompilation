FUN_00714e20:
00714E20  55                        PUSH EBP
00714E21  8B EC                     MOV EBP,ESP
00714E23  53                        PUSH EBX
00714E24  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00714E27  56                        PUSH ESI
00714E28  57                        PUSH EDI
00714E29  85 DB                     TEST EBX,EBX
00714E2B  8B F1                     MOV ESI,ECX
00714E2D  75 0C                     JNZ 0x00714e3b
00714E2F  5F                        POP EDI
00714E30  5E                        POP ESI
00714E31  B8 CC FF FF FF            MOV EAX,0xffffffcc
00714E36  5B                        POP EBX
00714E37  5D                        POP EBP
00714E38  C2 08 00                  RET 0x8
LAB_00714e3b:
00714E3B  8B FB                     MOV EDI,EBX
00714E3D  83 C9 FF                  OR ECX,0xffffffff
00714E40  33 C0                     XOR EAX,EAX
00714E42  F2 AE                     SCASB.REPNE ES:EDI
00714E44  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00714E47  F7 D1                     NOT ECX
00714E49  49                        DEC ECX
00714E4A  8B C1                     MOV EAX,ECX
00714E4C  3B F8                     CMP EDI,EAX
00714E4E  7F 02                     JG 0x00714e52
00714E50  8B C7                     MOV EAX,EDI
LAB_00714e52:
00714E52  40                        INC EAX
00714E53  8B CE                     MOV ECX,ESI
00714E55  50                        PUSH EAX
00714E56  E8 85 FE FF FF            CALL 0x00714ce0
00714E5B  85 C0                     TEST EAX,EAX
00714E5D  75 0F                     JNZ 0x00714e6e
00714E5F  8B 06                     MOV EAX,dword ptr [ESI]
00714E61  57                        PUSH EDI
00714E62  53                        PUSH EBX
00714E63  50                        PUSH EAX
00714E64  E8 D7 94 01 00            CALL 0x0072e340
00714E69  83 C4 0C                  ADD ESP,0xc
00714E6C  33 C0                     XOR EAX,EAX
LAB_00714e6e:
00714E6E  5F                        POP EDI
00714E6F  5E                        POP ESI
00714E70  5B                        POP EBX
00714E71  5D                        POP EBP
00714E72  C2 08 00                  RET 0x8
