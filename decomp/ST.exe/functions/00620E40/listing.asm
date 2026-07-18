FUN_00620e40:
00620E40  55                        PUSH EBP
00620E41  8B EC                     MOV EBP,ESP
00620E43  83 EC 0C                  SUB ESP,0xc
00620E46  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00620E4B  53                        PUSH EBX
00620E4C  56                        PUSH ESI
00620E4D  57                        PUSH EDI
00620E4E  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
00620E54  8B F1                     MOV ESI,ECX
00620E56  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00620E59  33 C0                     XOR EAX,EAX
00620E5B  A0 4D 87 80 00            MOV AL,[0x0080874d]
00620E60  3B C1                     CMP EAX,ECX
00620E62  0F 84 A1 00 00 00         JZ 0x00620f09
00620E68  3B BE F1 00 00 00         CMP EDI,dword ptr [ESI + 0xf1]
00620E6E  0F 82 95 00 00 00         JC 0x00620f09
00620E74  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00620E77  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00620E7A  50                        PUSH EAX
00620E7B  53                        PUSH EBX
00620E7C  51                        PUSH ECX
00620E7D  57                        PUSH EDI
00620E7E  8B CE                     MOV ECX,ESI
00620E80  E8 F5 2C DE FF            CALL 0x00403b7a
00620E85  85 C0                     TEST EAX,EAX
00620E87  7D 15                     JGE 0x00620e9e
00620E89  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00620E8C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00620E8F  52                        PUSH EDX
00620E90  53                        PUSH EBX
00620E91  50                        PUSH EAX
00620E92  57                        PUSH EDI
00620E93  8B CE                     MOV ECX,ESI
00620E95  E8 76 3C DE FF            CALL 0x00404b10
00620E9A  85 C0                     TEST EAX,EAX
00620E9C  7D 05                     JGE 0x00620ea3
LAB_00620e9e:
00620E9E  83 F8 02                  CMP EAX,0x2
00620EA1  75 66                     JNZ 0x00620f09
LAB_00620ea3:
00620EA3  33 C0                     XOR EAX,EAX
00620EA5  A0 4E 87 80 00            MOV AL,[0x0080874e]
00620EAA  48                        DEC EAX
00620EAB  74 14                     JZ 0x00620ec1
00620EAD  48                        DEC EAX
00620EAE  74 0A                     JZ 0x00620eba
00620EB0  48                        DEC EAX
00620EB1  75 56                     JNZ 0x00620f09
00620EB3  B8 91 00 00 00            MOV EAX,0x91
00620EB8  EB 0C                     JMP 0x00620ec6
LAB_00620eba:
00620EBA  B8 90 00 00 00            MOV EAX,0x90
00620EBF  EB 05                     JMP 0x00620ec6
LAB_00620ec1:
00620EC1  B8 8F 00 00 00            MOV EAX,0x8f
LAB_00620ec6:
00620EC6  33 C9                     XOR ECX,ECX
00620EC8  8D 55 F4                  LEA EDX,[EBP + -0xc]
00620ECB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620ECE  6A 00                     PUSH 0x0
00620ED0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00620ED3  52                        PUSH EDX
00620ED4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00620ED7  83 C9 FF                  OR ECX,0xffffffff
00620EDA  50                        PUSH EAX
00620EDB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620EDE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00620EE1  6A 00                     PUSH 0x0
00620EE3  6A 06                     PUSH 0x6
00620EE5  B9 58 76 80 00            MOV ECX,0x807658
00620EEA  E8 E9 3C DE FF            CALL 0x00404bd8
00620EEF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00620EF2  6A 28                     PUSH 0x28
00620EF4  53                        PUSH EBX
00620EF5  50                        PUSH EAX
00620EF6  8B CE                     MOV ECX,ESI
00620EF8  E8 65 4E DE FF            CALL 0x00405d62
00620EFD  81 C7 FA 00 00 00         ADD EDI,0xfa
00620F03  89 BE F1 00 00 00         MOV dword ptr [ESI + 0xf1],EDI
LAB_00620f09:
00620F09  5F                        POP EDI
00620F0A  5E                        POP ESI
00620F0B  5B                        POP EBX
00620F0C  8B E5                     MOV ESP,EBP
00620F0E  5D                        POP EBP
00620F0F  C2 10 00                  RET 0x10
