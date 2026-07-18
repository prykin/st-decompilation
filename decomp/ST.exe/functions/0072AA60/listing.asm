FUN_0072aa60:
0072AA60  55                        PUSH EBP
0072AA61  8B EC                     MOV EBP,ESP
0072AA63  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072AA66  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072AA69  53                        PUSH EBX
0072AA6A  56                        PUSH ESI
0072AA6B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072AA6E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072AA71  57                        PUSH EDI
0072AA72  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072AA75  3B F9                     CMP EDI,ECX
0072AA77  7D 64                     JGE 0x0072aadd
LAB_0072aa79:
0072AA79  8B 08                     MOV ECX,dword ptr [EAX]
0072AA7B  49                        DEC ECX
0072AA7C  89 08                     MOV dword ptr [EAX],ECX
0072AA7E  78 5D                     JS 0x0072aadd
0072AA80  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072AA83  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072AA86  03 F3                     ADD ESI,EBX
0072AA88  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
0072AA8B  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072AA8E  D1 E9                     SHR ECX,0x1
0072AA90  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072AA93  75 07                     JNZ 0x0072aa9c
0072AA95  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072aa9c:
0072AA9C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072AA9F  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072AAA2  03 D9                     ADD EBX,ECX
0072AAA4  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072AAA7  8B CB                     MOV ECX,EBX
0072AAA9  C1 EB 10                  SHR EBX,0x10
0072AAAC  74 1A                     JZ 0x0072aac8
0072AAAE  81 E1 FF FF 00 00         AND ECX,0xffff
0072AAB4  46                        INC ESI
0072AAB5  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0072AAB8  8D 4F 01                  LEA ECX,[EDI + 0x1]
0072AABB  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072AABE  83 C2 02                  ADD EDX,0x2
0072AAC1  3B CF                     CMP ECX,EDI
0072AAC3  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0072AAC6  7D 15                     JGE 0x0072aadd
LAB_0072aac8:
0072AAC8  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072AACB  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
0072AACE  03 F9                     ADD EDI,ECX
0072AAD0  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072AAD3  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
0072AAD6  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072AAD9  3B F9                     CMP EDI,ECX
0072AADB  7C 9C                     JL 0x0072aa79
LAB_0072aadd:
0072AADD  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072AAE0  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072AAE3  3B CF                     CMP ECX,EDI
0072AAE5  0F 8D 8D 00 00 00         JGE 0x0072ab78
0072AAEB  8B 08                     MOV ECX,dword ptr [EAX]
0072AAED  49                        DEC ECX
0072AAEE  89 08                     MOV dword ptr [EAX],ECX
0072AAF0  0F 88 82 00 00 00         JS 0x0072ab78
0072AAF6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072AAF9  8D 3C 09                  LEA EDI,[ECX + ECX*0x1]
LAB_0072aafc:
0072AAFC  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072AAFF  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072AB02  85 CB                     TEST EBX,ECX
0072AB04  74 1B                     JZ 0x0072ab21
0072AB06  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0072AB09  33 DB                     XOR EBX,EBX
0072AB0B  66 8B 1A                  MOV BX,word ptr [EDX]
0072AB0E  C1 F9 10                  SAR ECX,0x10
0072AB11  3B CB                     CMP ECX,EBX
0072AB13  7D 0C                     JGE 0x0072ab21
0072AB15  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0072AB18  33 C9                     XOR ECX,ECX
0072AB1A  8A 0E                     MOV CL,byte ptr [ESI]
0072AB1C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0072AB1F  88 0E                     MOV byte ptr [ESI],CL
LAB_0072ab21:
0072AB21  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072AB24  D1 E9                     SHR ECX,0x1
0072AB26  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072AB29  75 07                     JNZ 0x0072ab32
0072AB2B  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072ab32:
0072AB32  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072AB35  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072AB38  03 F3                     ADD ESI,EBX
0072AB3A  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072AB3D  03 D9                     ADD EBX,ECX
0072AB3F  03 D7                     ADD EDX,EDI
0072AB41  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072AB44  8B CB                     MOV ECX,EBX
0072AB46  C1 EB 10                  SHR EBX,0x10
0072AB49  74 1B                     JZ 0x0072ab66
0072AB4B  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0072AB4E  81 E1 FF FF 00 00         AND ECX,0xffff
0072AB54  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0072AB57  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072AB5A  46                        INC ESI
0072AB5B  83 C2 02                  ADD EDX,0x2
0072AB5E  41                        INC ECX
0072AB5F  3B CB                     CMP ECX,EBX
0072AB61  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0072AB64  7D 12                     JGE 0x0072ab78
LAB_0072ab66:
0072AB66  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072AB69  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072AB6C  03 D9                     ADD EBX,ECX
0072AB6E  8B 08                     MOV ECX,dword ptr [EAX]
0072AB70  49                        DEC ECX
0072AB71  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072AB74  89 08                     MOV dword ptr [EAX],ECX
0072AB76  79 84                     JNS 0x0072aafc
LAB_0072ab78:
0072AB78  5F                        POP EDI
0072AB79  5E                        POP ESI
0072AB7A  5B                        POP EBX
0072AB7B  5D                        POP EBP
0072AB7C  C3                        RET
