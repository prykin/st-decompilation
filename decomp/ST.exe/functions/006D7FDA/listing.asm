FUN_006d7fda:
006D7FDA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D7FDD  05 00 40 00 00            ADD EAX,0x4000
006D7FE2  89 45 D2                  MOV dword ptr [EBP + -0x2e],EAX
006D7FE5  8D 5D D7                  LEA EBX,[EBP + -0x29]
006D7FE8  B8 01 00 00 00            MOV EAX,0x1
006D7FED  50                        PUSH EAX
006D7FEE  53                        PUSH EBX
006D7FEF  FF 75 08                  PUSH dword ptr [EBP + 0x8]
006D7FF2  FF 55 BA                  CALL dword ptr [EBP + -0x46]
006D7FF5  83 F8 01                  CMP EAX,0x1
006D7FF8  75 17                     JNZ 0x006d8011
006D7FFA  8A 45 D7                  MOV AL,byte ptr [EBP + -0x29]
006D7FFD  8B 5D D2                  MOV EBX,dword ptr [EBP + -0x2e]
006D8000  50                        PUSH EAX
006D8001  53                        PUSH EBX
006D8002  FF 75 08                  PUSH dword ptr [EBP + 0x8]
006D8005  FF 55 BA                  CALL dword ptr [EBP + -0x46]
006D8008  33 DB                     XOR EBX,EBX
006D800A  8A 5D D7                  MOV BL,byte ptr [EBP + -0x29]
006D800D  3B C3                     CMP EAX,EBX
006D800F  74 0A                     JZ 0x006d801b
LAB_006d8011:
006D8011  0B C0                     OR EAX,EAX
006D8013  F9                        STC
006D8014  7C 05                     JL 0x006d801b
006D8016  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006d801b:
006D801B  C3                        RET
