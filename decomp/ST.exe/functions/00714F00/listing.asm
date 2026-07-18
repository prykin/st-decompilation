FUN_00714f00:
00714F00  55                        PUSH EBP
00714F01  8B EC                     MOV EBP,ESP
00714F03  53                        PUSH EBX
00714F04  56                        PUSH ESI
00714F05  57                        PUSH EDI
00714F06  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00714F09  85 FF                     TEST EDI,EDI
00714F0B  8B F1                     MOV ESI,ECX
00714F0D  75 0C                     JNZ 0x00714f1b
00714F0F  5F                        POP EDI
00714F10  5E                        POP ESI
00714F11  B8 CC FF FF FF            MOV EAX,0xffffffcc
00714F16  5B                        POP EBX
00714F17  5D                        POP EBP
00714F18  C2 08 00                  RET 0x8
LAB_00714f1b:
00714F1B  83 C9 FF                  OR ECX,0xffffffff
00714F1E  33 C0                     XOR EAX,EAX
00714F20  F2 AE                     SCASB.REPNE ES:EDI
00714F22  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00714F25  F7 D1                     NOT ECX
00714F27  49                        DEC ECX
00714F28  3B D9                     CMP EBX,ECX
00714F2A  8B D1                     MOV EDX,ECX
00714F2C  7F 02                     JG 0x00714f30
00714F2E  8B D3                     MOV EDX,EBX
LAB_00714f30:
00714F30  8B 3E                     MOV EDI,dword ptr [ESI]
00714F32  85 FF                     TEST EDI,EDI
00714F34  74 0B                     JZ 0x00714f41
00714F36  83 C9 FF                  OR ECX,0xffffffff
00714F39  33 C0                     XOR EAX,EAX
00714F3B  F2 AE                     SCASB.REPNE ES:EDI
00714F3D  F7 D1                     NOT ECX
00714F3F  EB 02                     JMP 0x00714f43
LAB_00714f41:
00714F41  33 C9                     XOR ECX,ECX
LAB_00714f43:
00714F43  8D 44 11 01               LEA EAX,[ECX + EDX*0x1 + 0x1]
00714F47  8B CE                     MOV ECX,ESI
00714F49  50                        PUSH EAX
00714F4A  E8 91 FD FF FF            CALL 0x00714ce0
00714F4F  85 C0                     TEST EAX,EAX
00714F51  75 12                     JNZ 0x00714f65
00714F53  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00714F56  8B 16                     MOV EDX,dword ptr [ESI]
00714F58  53                        PUSH EBX
00714F59  51                        PUSH ECX
00714F5A  52                        PUSH EDX
00714F5B  E8 F0 9D 01 00            CALL 0x0072ed50
00714F60  83 C4 0C                  ADD ESP,0xc
00714F63  33 C0                     XOR EAX,EAX
LAB_00714f65:
00714F65  5F                        POP EDI
00714F66  5E                        POP ESI
00714F67  5B                        POP EBX
00714F68  5D                        POP EBP
00714F69  C2 08 00                  RET 0x8
