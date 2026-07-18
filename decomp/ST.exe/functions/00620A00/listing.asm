FUN_00620a00:
00620A00  55                        PUSH EBP
00620A01  8B EC                     MOV EBP,ESP
00620A03  83 EC 0C                  SUB ESP,0xc
00620A06  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00620A0B  53                        PUSH EBX
00620A0C  56                        PUSH ESI
00620A0D  8B F1                     MOV ESI,ECX
00620A0F  57                        PUSH EDI
00620A10  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
00620A16  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00620A19  33 C9                     XOR ECX,ECX
00620A1B  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00620A21  3B C8                     CMP ECX,EAX
00620A23  0F 84 A2 00 00 00         JZ 0x00620acb
00620A29  3B BE E5 00 00 00         CMP EDI,dword ptr [ESI + 0xe5]
00620A2F  0F 82 96 00 00 00         JC 0x00620acb
00620A35  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00620A38  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00620A3B  50                        PUSH EAX
00620A3C  53                        PUSH EBX
00620A3D  52                        PUSH EDX
00620A3E  57                        PUSH EDI
00620A3F  8B CE                     MOV ECX,ESI
00620A41  E8 61 45 DE FF            CALL 0x00404fa7
00620A46  85 C0                     TEST EAX,EAX
00620A48  7D 15                     JGE 0x00620a5f
00620A4A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00620A4D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00620A50  50                        PUSH EAX
00620A51  53                        PUSH EBX
00620A52  51                        PUSH ECX
00620A53  57                        PUSH EDI
00620A54  8B CE                     MOV ECX,ESI
00620A56  E8 BE 41 DE FF            CALL 0x00404c19
00620A5B  85 C0                     TEST EAX,EAX
00620A5D  7D 05                     JGE 0x00620a64
LAB_00620a5f:
00620A5F  83 F8 02                  CMP EAX,0x2
00620A62  75 67                     JNZ 0x00620acb
LAB_00620a64:
00620A64  33 C0                     XOR EAX,EAX
00620A66  A0 4E 87 80 00            MOV AL,[0x0080874e]
00620A6B  48                        DEC EAX
00620A6C  74 14                     JZ 0x00620a82
00620A6E  48                        DEC EAX
00620A6F  74 0A                     JZ 0x00620a7b
00620A71  48                        DEC EAX
00620A72  75 57                     JNZ 0x00620acb
00620A74  B8 97 00 00 00            MOV EAX,0x97
00620A79  EB 0C                     JMP 0x00620a87
LAB_00620a7b:
00620A7B  B8 96 00 00 00            MOV EAX,0x96
00620A80  EB 05                     JMP 0x00620a87
LAB_00620a82:
00620A82  B8 95 00 00 00            MOV EAX,0x95
LAB_00620a87:
00620A87  33 D2                     XOR EDX,EDX
00620A89  83 C9 FF                  OR ECX,0xffffffff
00620A8C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00620A8F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620A92  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620A95  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00620A98  8D 4D F4                  LEA ECX,[EBP + -0xc]
00620A9B  52                        PUSH EDX
00620A9C  51                        PUSH ECX
00620A9D  50                        PUSH EAX
00620A9E  52                        PUSH EDX
00620A9F  6A 06                     PUSH 0x6
00620AA1  B9 58 76 80 00            MOV ECX,0x807658
00620AA6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00620AA9  E8 2A 41 DE FF            CALL 0x00404bd8
00620AAE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00620AB1  68 8E 00 00 00            PUSH 0x8e
00620AB6  53                        PUSH EBX
00620AB7  52                        PUSH EDX
00620AB8  8B CE                     MOV ECX,ESI
00620ABA  E8 A3 52 DE FF            CALL 0x00405d62
00620ABF  81 C7 FA 00 00 00         ADD EDI,0xfa
00620AC5  89 BE E5 00 00 00         MOV dword ptr [ESI + 0xe5],EDI
LAB_00620acb:
00620ACB  5F                        POP EDI
00620ACC  5E                        POP ESI
00620ACD  5B                        POP EBX
00620ACE  8B E5                     MOV ESP,EBP
00620AD0  5D                        POP EBP
00620AD1  C2 10 00                  RET 0x10
