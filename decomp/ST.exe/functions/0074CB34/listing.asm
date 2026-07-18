FUN_0074cb34:
0074CB34  55                        PUSH EBP
0074CB35  8B EC                     MOV EBP,ESP
0074CB37  83 EC 2C                  SUB ESP,0x2c
0074CB3A  53                        PUSH EBX
0074CB3B  8B D9                     MOV EBX,ECX
0074CB3D  56                        PUSH ESI
0074CB3E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074CB41  8D 4D EC                  LEA ECX,[EBP + -0x14]
0074CB44  57                        PUSH EDI
0074CB45  8B 06                     MOV EAX,dword ptr [ESI]
0074CB47  51                        PUSH ECX
0074CB48  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0074CB4B  51                        PUSH ECX
0074CB4C  56                        PUSH ESI
0074CB4D  FF 50 14                  CALL dword ptr [EAX + 0x14]
0074CB50  8B F8                     MOV EDI,EAX
0074CB52  8D 55 EC                  LEA EDX,[EBP + -0x14]
0074CB55  F7 DF                     NEG EDI
0074CB57  1B FF                     SBB EDI,EDI
0074CB59  33 C9                     XOR ECX,ECX
0074CB5B  47                        INC EDI
0074CB5C  39 4B 54                  CMP dword ptr [EBX + 0x54],ECX
0074CB5F  8B 83 90 00 00 00         MOV EAX,dword ptr [EBX + 0x90]
0074CB65  0F 95 C1                  SETNZ CL
0074CB68  51                        PUSH ECX
0074CB69  8B CF                     MOV ECX,EDI
0074CB6B  F7 D9                     NEG ECX
0074CB6D  1B C9                     SBB ECX,ECX
0074CB6F  8B 80 98 00 00 00         MOV EAX,dword ptr [EAX + 0x98]
0074CB75  23 CA                     AND ECX,EDX
0074CB77  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0074CB7A  51                        PUSH ECX
0074CB7B  8B CF                     MOV ECX,EDI
0074CB7D  F7 D9                     NEG ECX
0074CB7F  1B C9                     SBB ECX,ECX
0074CB81  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074CB84  8B 00                     MOV EAX,dword ptr [EAX]
0074CB86  23 CA                     AND ECX,EDX
0074CB88  51                        PUSH ECX
0074CB89  8D 4D 08                  LEA ECX,[EBP + 0x8]
0074CB8C  51                        PUSH ECX
0074CB8D  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074CB90  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0074CB93  85 C0                     TEST EAX,EAX
0074CB95  7C 49                     JL 0x0074cbe0
0074CB97  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CB9A  8D 55 FC                  LEA EDX,[EBP + -0x4]
0074CB9D  52                        PUSH EDX
0074CB9E  68 70 1B 7A 00            PUSH 0x7a1b70
0074CBA3  8B 08                     MOV ECX,dword ptr [EAX]
0074CBA5  50                        PUSH EAX
0074CBA6  FF 11                     CALL dword ptr [ECX]
0074CBA8  85 C0                     TEST EAX,EAX
0074CBAA  7C 3B                     JL 0x0074cbe7
0074CBAC  8B 93 8C 00 00 00         MOV EDX,dword ptr [EBX + 0x8c]
0074CBB2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074CBB5  81 C2 A8 00 00 00         ADD EDX,0xa8
0074CBBB  8B 08                     MOV ECX,dword ptr [EAX]
0074CBBD  52                        PUSH EDX
0074CBBE  6A 28                     PUSH 0x28
0074CBC0  50                        PUSH EAX
0074CBC1  FF 51 50                  CALL dword ptr [ECX + 0x50]
0074CBC4  8B F8                     MOV EDI,EAX
0074CBC6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074CBC9  50                        PUSH EAX
0074CBCA  8B 08                     MOV ECX,dword ptr [EAX]
0074CBCC  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074CBCF  85 FF                     TEST EDI,EDI
0074CBD1  0F 8D 8C 00 00 00         JGE 0x0074cc63
0074CBD7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CBDA  50                        PUSH EAX
0074CBDB  8B 08                     MOV ECX,dword ptr [EAX]
0074CBDD  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074cbe0:
0074CBE0  33 C0                     XOR EAX,EAX
0074CBE2  E9 F4 00 00 00            JMP 0x0074ccdb
LAB_0074cbe7:
0074CBE7  85 FF                     TEST EDI,EDI
0074CBE9  74 11                     JZ 0x0074cbfc
0074CBEB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CBEE  8D 55 EC                  LEA EDX,[EBP + -0x14]
0074CBF1  52                        PUSH EDX
0074CBF2  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0074CBF5  8B 08                     MOV ECX,dword ptr [EAX]
0074CBF7  52                        PUSH EDX
0074CBF8  50                        PUSH EAX
0074CBF9  FF 51 18                  CALL dword ptr [ECX + 0x18]
LAB_0074cbfc:
0074CBFC  8B 06                     MOV EAX,dword ptr [ESI]
0074CBFE  56                        PUSH ESI
0074CBFF  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0074CC02  85 C0                     TEST EAX,EAX
0074CC04  75 0B                     JNZ 0x0074cc11
0074CC06  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CC09  6A 01                     PUSH 0x1
0074CC0B  50                        PUSH EAX
0074CC0C  8B 08                     MOV ECX,dword ptr [EAX]
0074CC0E  FF 51 20                  CALL dword ptr [ECX + 0x20]
LAB_0074cc11:
0074CC11  8B 06                     MOV EAX,dword ptr [ESI]
0074CC13  56                        PUSH ESI
0074CC14  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0074CC17  85 C0                     TEST EAX,EAX
0074CC19  74 06                     JZ 0x0074cc21
0074CC1B  83 7B 54 00               CMP dword ptr [EBX + 0x54],0x0
0074CC1F  74 0B                     JZ 0x0074cc2c
LAB_0074cc21:
0074CC21  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CC24  6A 01                     PUSH 0x1
0074CC26  50                        PUSH EAX
0074CC27  8B 08                     MOV ECX,dword ptr [EAX]
0074CC29  FF 51 40                  CALL dword ptr [ECX + 0x40]
LAB_0074cc2c:
0074CC2C  8B 06                     MOV EAX,dword ptr [ESI]
0074CC2E  56                        PUSH ESI
0074CC2F  FF 50 24                  CALL dword ptr [EAX + 0x24]
0074CC32  85 C0                     TEST EAX,EAX
0074CC34  75 0B                     JNZ 0x0074cc41
0074CC36  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CC39  6A 01                     PUSH 0x1
0074CC3B  50                        PUSH EAX
0074CC3C  8B 08                     MOV ECX,dword ptr [EAX]
0074CC3E  FF 51 28                  CALL dword ptr [ECX + 0x28]
LAB_0074cc41:
0074CC41  8B 06                     MOV EAX,dword ptr [ESI]
0074CC43  8D 4D F8                  LEA ECX,[EBP + -0x8]
0074CC46  51                        PUSH ECX
0074CC47  56                        PUSH ESI
0074CC48  FF 50 34                  CALL dword ptr [EAX + 0x34]
0074CC4B  85 C0                     TEST EAX,EAX
0074CC4D  75 14                     JNZ 0x0074cc63
0074CC4F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CC52  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074CC55  8B 08                     MOV ECX,dword ptr [EAX]
0074CC57  50                        PUSH EAX
0074CC58  FF 51 38                  CALL dword ptr [ECX + 0x38]
0074CC5B  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074CC5E  E8 ED EF FF FF            CALL 0x0074bc50
LAB_0074cc63:
0074CC63  83 63 54 00               AND dword ptr [EBX + 0x54],0x0
0074CC67  8B 06                     MOV EAX,dword ptr [ESI]
0074CC69  8D 4D DC                  LEA ECX,[EBP + -0x24]
0074CC6C  51                        PUSH ECX
0074CC6D  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0074CC70  51                        PUSH ECX
0074CC71  56                        PUSH ESI
0074CC72  FF 50 44                  CALL dword ptr [EAX + 0x44]
0074CC75  85 C0                     TEST EAX,EAX
0074CC77  75 11                     JNZ 0x0074cc8a
0074CC79  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CC7C  8D 55 DC                  LEA EDX,[EBP + -0x24]
0074CC7F  52                        PUSH EDX
0074CC80  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0074CC83  8B 08                     MOV ECX,dword ptr [EAX]
0074CC85  52                        PUSH EDX
0074CC86  50                        PUSH EAX
0074CC87  FF 51 48                  CALL dword ptr [ECX + 0x48]
LAB_0074cc8a:
0074CC8A  8B 06                     MOV EAX,dword ptr [ESI]
0074CC8C  56                        PUSH ESI
0074CC8D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0074CC90  8B F8                     MOV EDI,EAX
0074CC92  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CC95  57                        PUSH EDI
0074CC96  50                        PUSH EAX
0074CC97  8B 08                     MOV ECX,dword ptr [EAX]
0074CC99  FF 51 30                  CALL dword ptr [ECX + 0x30]
0074CC9C  8B 06                     MOV EAX,dword ptr [ESI]
0074CC9E  56                        PUSH ESI
0074CC9F  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074CCA2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CCA5  50                        PUSH EAX
0074CCA6  8B 08                     MOV ECX,dword ptr [EAX]
0074CCA8  FF 51 10                  CALL dword ptr [ECX + 0x10]
0074CCAB  8B 06                     MOV EAX,dword ptr [ESI]
0074CCAD  8D 4D F8                  LEA ECX,[EBP + -0x8]
0074CCB0  51                        PUSH ECX
0074CCB1  56                        PUSH ESI
0074CCB2  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0074CCB5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CCB8  8D 55 F4                  LEA EDX,[EBP + -0xc]
0074CCBB  52                        PUSH EDX
0074CCBC  50                        PUSH EAX
0074CCBD  8B 08                     MOV ECX,dword ptr [EAX]
0074CCBF  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074CCC2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0074CCC5  8B CF                     MOV ECX,EDI
0074CCC7  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0074CCCA  8B C1                     MOV EAX,ECX
0074CCCC  C1 E9 02                  SHR ECX,0x2
0074CCCF  F3 A5                     MOVSD.REP ES:EDI,ESI
0074CCD1  8B C8                     MOV ECX,EAX
0074CCD3  83 E1 03                  AND ECX,0x3
0074CCD6  F3 A4                     MOVSB.REP ES:EDI,ESI
0074CCD8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0074ccdb:
0074CCDB  5F                        POP EDI
0074CCDC  5E                        POP ESI
0074CCDD  5B                        POP EBX
0074CCDE  C9                        LEAVE
0074CCDF  C2 04 00                  RET 0x4
