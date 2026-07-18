FUN_004ab300:
004AB300  55                        PUSH EBP
004AB301  8B EC                     MOV EBP,ESP
004AB303  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AB306  56                        PUSH ESI
004AB307  57                        PUSH EDI
004AB308  8B F9                     MOV EDI,ECX
004AB30A  85 C0                     TEST EAX,EAX
004AB30C  0F 8C E6 00 00 00         JL 0x004ab3f8
004AB312  83 F8 09                  CMP EAX,0x9
004AB315  0F 8F DD 00 00 00         JG 0x004ab3f8
004AB31B  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004AB31E  8B 84 B6 7A 74 80 00      MOV EAX,dword ptr [ESI + ESI*0x4 + 0x80747a]
004AB325  85 C0                     TEST EAX,EAX
004AB327  0F 84 CB 00 00 00         JZ 0x004ab3f8
004AB32D  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004AB333  E8 20 7D F5 FF            CALL 0x00403058
004AB338  D9 84 B6 65 74 80 00      FLD float ptr [ESI + ESI*0x4 + 0x807465]
004AB33F  6A 01                     PUSH 0x1
004AB341  D9 1D D0 73 80 00         FSTP float ptr [0x008073d0]
004AB347  D9 84 B6 69 74 80 00      FLD float ptr [ESI + ESI*0x4 + 0x807469]
004AB34E  D9 1D D4 73 80 00         FSTP float ptr [0x008073d4]
004AB354  8B 84 B6 6D 74 80 00      MOV EAX,dword ptr [ESI + ESI*0x4 + 0x80746d]
004AB35B  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AB360  8B 8C B6 71 74 80 00      MOV ECX,dword ptr [ESI + ESI*0x4 + 0x807471]
004AB367  89 0D DC 73 80 00         MOV dword ptr [0x008073dc],ECX
004AB36D  8B 94 B6 75 74 80 00      MOV EDX,dword ptr [ESI + ESI*0x4 + 0x807475]
004AB374  8B CF                     MOV ECX,EDI
004AB376  89 15 FC 73 80 00         MOV dword ptr [0x008073fc],EDX
004AB37C  E8 C6 A1 F5 FF            CALL 0x00405547
004AB381  8B 0D 3C 74 80 00         MOV ECX,dword ptr [0x0080743c]
004AB387  33 C0                     XOR EAX,EAX
004AB389  8A 84 B6 79 74 80 00      MOV AL,byte ptr [ESI + ESI*0x4 + 0x807479]
004AB390  81 E1 FF 00 00 00         AND ECX,0xff
004AB396  2B C8                     SUB ECX,EAX
004AB398  8D 41 02                  LEA EAX,[ECX + 0x2]
004AB39B  83 F8 04                  CMP EAX,0x4
004AB39E  77 2F                     JA 0x004ab3cf
switchD_004ab3a0::switchD:
004AB3A0  FF 24 85 00 B4 4A 00      JMP dword ptr [EAX*0x4 + 0x4ab400]
switchD_004ab3a0::caseD_fffffffe:
004AB3A7  6A 01                     PUSH 0x1
004AB3A9  8B CF                     MOV ECX,EDI
004AB3AB  E8 97 88 F5 FF            CALL 0x00403c47
switchD_004ab3a0::caseD_ffffffff:
004AB3B0  6A 01                     PUSH 0x1
004AB3B2  EB 14                     JMP 0x004ab3c8
switchD_004ab3a0::caseD_0:
004AB3B4  8B CF                     MOV ECX,EDI
004AB3B6  E8 0C 9A F5 FF            CALL 0x00404dc7
004AB3BB  EB 12                     JMP 0x004ab3cf
switchD_004ab3a0::caseD_2:
004AB3BD  6A 00                     PUSH 0x0
004AB3BF  8B CF                     MOV ECX,EDI
004AB3C1  E8 81 88 F5 FF            CALL 0x00403c47
switchD_004ab3a0::caseD_1:
004AB3C6  6A 00                     PUSH 0x0
LAB_004ab3c8:
004AB3C8  8B CF                     MOV ECX,EDI
004AB3CA  E8 78 88 F5 FF            CALL 0x00403c47
switchD_004ab3a0::default:
004AB3CF  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AB3D4  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
004AB3DA  8B 0D D8 73 80 00         MOV ECX,dword ptr [0x008073d8]
004AB3E0  25 FF 00 00 00            AND EAX,0xff
004AB3E5  50                        PUSH EAX
004AB3E6  A1 DC 73 80 00            MOV EAX,[0x008073dc]
004AB3EB  52                        PUSH EDX
004AB3EC  50                        PUSH EAX
004AB3ED  51                        PUSH ECX
004AB3EE  B9 58 76 80 00            MOV ECX,0x807658
004AB3F3  E8 DC 82 F5 FF            CALL 0x004036d4
LAB_004ab3f8:
004AB3F8  5F                        POP EDI
004AB3F9  5E                        POP ESI
004AB3FA  5D                        POP EBP
004AB3FB  C2 04 00                  RET 0x4
