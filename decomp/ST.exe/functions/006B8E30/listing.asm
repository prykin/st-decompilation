FUN_006b8e30:
006B8E30  55                        PUSH EBP
006B8E31  8B EC                     MOV EBP,ESP
006B8E33  83 EC 20                  SUB ESP,0x20
006B8E36  53                        PUSH EBX
006B8E37  56                        PUSH ESI
006B8E38  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8E3B  33 DB                     XOR EBX,EBX
006B8E3D  8B 06                     MOV EAX,dword ptr [ESI]
006B8E3F  39 58 40                  CMP dword ptr [EAX + 0x40],EBX
006B8E42  75 0A                     JNZ 0x006b8e4e
006B8E44  5E                        POP ESI
006B8E45  33 C0                     XOR EAX,EAX
006B8E47  5B                        POP EBX
006B8E48  8B E5                     MOV ESP,EBP
006B8E4A  5D                        POP EBP
006B8E4B  C2 04 00                  RET 0x4
LAB_006b8e4e:
006B8E4E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006B8E51  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006B8E54  8D 46 10                  LEA EAX,[ESI + 0x10]
006B8E57  57                        PUSH EDI
006B8E58  8B F8                     MOV EDI,EAX
006B8E5A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B8E5D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B8E60  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006B8E63  8B 07                     MOV EAX,dword ptr [EDI]
006B8E65  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006B8E68  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B8E6B  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006B8E6E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B8E71  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006B8E74  03 D0                     ADD EDX,EAX
006B8E76  8B 7F 0C                  MOV EDI,dword ptr [EDI + 0xc]
006B8E79  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006B8E7C  03 F9                     ADD EDI,ECX
006B8E7E  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_006b8e81:
006B8E81  8B 0E                     MOV ECX,dword ptr [ESI]
006B8E83  6A 00                     PUSH 0x0
006B8E85  68 00 00 00 01            PUSH 0x1000000
006B8E8A  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
006B8E8D  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B8E90  51                        PUSH ECX
006B8E91  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006B8E94  8B 10                     MOV EDX,dword ptr [EAX]
006B8E96  51                        PUSH ECX
006B8E97  8D 4D E0                  LEA ECX,[EBP + -0x20]
006B8E9A  51                        PUSH ECX
006B8E9B  50                        PUSH EAX
006B8E9C  FF 52 14                  CALL dword ptr [EDX + 0x14]
006B8E9F  8B F8                     MOV EDI,EAX
006B8EA1  85 FF                     TEST EDI,EDI
006B8EA3  74 3D                     JZ 0x006b8ee2
006B8EA5  81 FF C2 01 76 88         CMP EDI,0x887601c2
006B8EAB  75 13                     JNZ 0x006b8ec0
006B8EAD  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006B8EB0  50                        PUSH EAX
006B8EB1  8B 10                     MOV EDX,dword ptr [EAX]
006B8EB3  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006B8EB6  8B 06                     MOV EAX,dword ptr [ESI]
006B8EB8  50                        PUSH EAX
006B8EB9  E8 82 5D 01 00            CALL 0x006cec40
006B8EBE  EB 1C                     JMP 0x006b8edc
LAB_006b8ec0:
006B8EC0  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B8EC6  74 08                     JZ 0x006b8ed0
006B8EC8  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B8ECE  75 12                     JNZ 0x006b8ee2
LAB_006b8ed0:
006B8ED0  85 DB                     TEST EBX,EBX
006B8ED2  75 0E                     JNZ 0x006b8ee2
006B8ED4  6A 02                     PUSH 0x2
006B8ED6  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006b8edc:
006B8EDC  43                        INC EBX
006B8EDD  83 FB 02                  CMP EBX,0x2
006B8EE0  7C 9F                     JL 0x006b8e81
LAB_006b8ee2:
006B8EE2  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B8EE8  74 08                     JZ 0x006b8ef2
006B8EEA  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B8EF0  75 02                     JNZ 0x006b8ef4
LAB_006b8ef2:
006B8EF2  33 FF                     XOR EDI,EDI
LAB_006b8ef4:
006B8EF4  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8EF7  80 E4 BF                  AND AH,0xbf
006B8EFA  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B8EFD  8B C7                     MOV EAX,EDI
006B8EFF  5F                        POP EDI
006B8F00  5E                        POP ESI
006B8F01  5B                        POP EBX
006B8F02  8B E5                     MOV ESP,EBP
006B8F04  5D                        POP EBP
006B8F05  C2 04 00                  RET 0x4
