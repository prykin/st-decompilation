__aullrem:
00735290  53                        PUSH EBX
00735291  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
00735295  0B C0                     OR EAX,EAX
00735297  75 18                     JNZ 0x007352b1
00735299  8B 4C 24 10               MOV ECX,dword ptr [ESP + 0x10]
0073529D  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
007352A1  33 D2                     XOR EDX,EDX
007352A3  F7 F1                     DIV ECX
007352A5  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
007352A9  F7 F1                     DIV ECX
007352AB  8B C2                     MOV EAX,EDX
007352AD  33 D2                     XOR EDX,EDX
007352AF  EB 50                     JMP 0x00735301
LAB_007352b1:
007352B1  8B C8                     MOV ECX,EAX
007352B3  8B 5C 24 10               MOV EBX,dword ptr [ESP + 0x10]
007352B7  8B 54 24 0C               MOV EDX,dword ptr [ESP + 0xc]
007352BB  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
LAB_007352bf:
007352BF  D1 E9                     SHR ECX,0x1
007352C1  D1 DB                     RCR EBX,0x1
007352C3  D1 EA                     SHR EDX,0x1
007352C5  D1 D8                     RCR EAX,0x1
007352C7  0B C9                     OR ECX,ECX
007352C9  75 F4                     JNZ 0x007352bf
007352CB  F7 F3                     DIV EBX
007352CD  8B C8                     MOV ECX,EAX
007352CF  F7 64 24 14               MUL dword ptr [ESP + 0x14]
007352D3  91                        XCHG EAX,ECX
007352D4  F7 64 24 10               MUL dword ptr [ESP + 0x10]
007352D8  03 D1                     ADD EDX,ECX
007352DA  72 0E                     JC 0x007352ea
007352DC  3B 54 24 0C               CMP EDX,dword ptr [ESP + 0xc]
007352E0  77 08                     JA 0x007352ea
007352E2  72 0E                     JC 0x007352f2
007352E4  3B 44 24 08               CMP EAX,dword ptr [ESP + 0x8]
007352E8  76 08                     JBE 0x007352f2
LAB_007352ea:
007352EA  2B 44 24 10               SUB EAX,dword ptr [ESP + 0x10]
007352EE  1B 54 24 14               SBB EDX,dword ptr [ESP + 0x14]
LAB_007352f2:
007352F2  2B 44 24 08               SUB EAX,dword ptr [ESP + 0x8]
007352F6  1B 54 24 0C               SBB EDX,dword ptr [ESP + 0xc]
007352FA  F7 DA                     NEG EDX
007352FC  F7 D8                     NEG EAX
007352FE  83 DA 00                  SBB EDX,0x0
LAB_00735301:
00735301  5B                        POP EBX
00735302  C2 10 00                  RET 0x10
