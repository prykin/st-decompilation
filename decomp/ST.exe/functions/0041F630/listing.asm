FUN_0041f630:
0041F630  55                        PUSH EBP
0041F631  8B EC                     MOV EBP,ESP
0041F633  83 EC 08                  SUB ESP,0x8
0041F636  53                        PUSH EBX
0041F637  56                        PUSH ESI
0041F638  8B F1                     MOV ESI,ECX
0041F63A  57                        PUSH EDI
0041F63B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041F63E  83 F8 08                  CMP EAX,0x8
0041F641  0F 83 DC 01 00 00         JNC 0x0041f823
0041F647  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0041F64D  85 C9                     TEST ECX,ECX
0041F64F  74 11                     JZ 0x0041f662
0041F651  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041F654  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0041F65C  0F 83 C1 01 00 00         JNC 0x0041f823
LAB_0041f662:
0041F662  8B 86 29 02 00 00         MOV EAX,dword ptr [ESI + 0x229]
0041F668  85 C0                     TEST EAX,EAX
0041F66A  0F 85 B3 01 00 00         JNZ 0x0041f823
0041F670  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
0041F673  83 FF 14                  CMP EDI,0x14
0041F676  74 14                     JZ 0x0041f68c
0041F678  81 FF E8 03 00 00         CMP EDI,0x3e8
0041F67E  74 0C                     JZ 0x0041f68c
0041F680  81 FF E9 03 00 00         CMP EDI,0x3e9
0041F686  0F 85 97 01 00 00         JNZ 0x0041f823
LAB_0041f68c:
0041F68C  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0041F692  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0041F695  84 C9                     TEST CL,CL
0041F697  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0041F69A  BB 01 00 00 00            MOV EBX,0x1
0041F69F  74 2C                     JZ 0x0041f6cd
0041F6A1  33 C0                     XOR EAX,EAX
0041F6A3  33 D2                     XOR EDX,EDX
0041F6A5  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041F6AA  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0041F6AD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0041F6B0  25 FF 00 00 00            AND EAX,0xff
0041F6B5  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0041F6BC  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041F6BF  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0041F6C6  0F 95 C2                  SETNZ DL
0041F6C9  8B C2                     MOV EAX,EDX
0041F6CB  EB 76                     JMP 0x0041f743
LAB_0041f6cd:
0041F6CD  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041F6D3  3A C1                     CMP AL,CL
0041F6D5  74 61                     JZ 0x0041f738
0041F6D7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0041F6DA  33 D2                     XOR EDX,EDX
0041F6DC  8A D1                     MOV DL,CL
0041F6DE  25 FF 00 00 00            AND EAX,0xff
0041F6E3  8B CA                     MOV ECX,EDX
0041F6E5  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0041F6EC  84 D2                     TEST DL,DL
0041F6EE  75 10                     JNZ 0x0041f700
0041F6F0  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0041F6F7  75 07                     JNZ 0x0041f700
0041F6F9  B8 FE FF FF FF            MOV EAX,0xfffffffe
0041F6FE  EB 3A                     JMP 0x0041f73a
LAB_0041f700:
0041F700  3A D3                     CMP DL,BL
0041F702  75 0F                     JNZ 0x0041f713
0041F704  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0041F70C  75 05                     JNZ 0x0041f713
0041F70E  83 C8 FF                  OR EAX,0xffffffff
0041F711  EB 27                     JMP 0x0041f73a
LAB_0041f713:
0041F713  84 D2                     TEST DL,DL
0041F715  75 0D                     JNZ 0x0041f724
0041F717  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0041F71E  75 04                     JNZ 0x0041f724
0041F720  8B C3                     MOV EAX,EBX
0041F722  EB 16                     JMP 0x0041f73a
LAB_0041f724:
0041F724  3A D3                     CMP DL,BL
0041F726  75 10                     JNZ 0x0041f738
0041F728  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0041F72F  75 07                     JNZ 0x0041f738
0041F731  B8 02 00 00 00            MOV EAX,0x2
0041F736  EB 02                     JMP 0x0041f73a
LAB_0041f738:
0041F738  33 C0                     XOR EAX,EAX
LAB_0041f73a:
0041F73A  33 C9                     XOR ECX,ECX
0041F73C  85 C0                     TEST EAX,EAX
0041F73E  0F 9C C1                  SETL CL
0041F741  8B C1                     MOV EAX,ECX
LAB_0041f743:
0041F743  3B C3                     CMP EAX,EBX
0041F745  75 49                     JNZ 0x0041f790
0041F747  8B 16                     MOV EDX,dword ptr [ESI]
0041F749  83 FF 14                  CMP EDI,0x14
0041F74C  8B CE                     MOV ECX,ESI
0041F74E  75 20                     JNZ 0x0041f770
0041F750  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0041F753  83 C0 F9                  ADD EAX,-0x7
0041F756  83 F8 1E                  CMP EAX,0x1e
0041F759  77 2F                     JA 0x0041f78a
0041F75B  33 C9                     XOR ECX,ECX
0041F75D  8A 88 34 F8 41 00         MOV CL,byte ptr [EAX + 0x41f834]
switchD_0041f763::switchD:
0041F763  FF 24 8D 2C F8 41 00      JMP dword ptr [ECX*0x4 + 0x41f82c]
switchD_0041f763::caseD_7:
0041F76A  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
0041F76E  EB 23                     JMP 0x0041f793
LAB_0041f770:
0041F770  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0041F773  83 C0 C2                  ADD EAX,-0x3e
0041F776  83 F8 35                  CMP EAX,0x35
0041F779  77 EF                     JA 0x0041f76a
0041F77B  33 C9                     XOR ECX,ECX
0041F77D  8A 88 5C F8 41 00         MOV CL,byte ptr [EAX + 0x41f85c]
switchD_0041f783::switchD:
0041F783  FF 24 8D 54 F8 41 00      JMP dword ptr [ECX*0x4 + 0x41f854]
switchD_0041f763::caseD_9:
0041F78A  C6 45 F8 04               MOV byte ptr [EBP + -0x8],0x4
0041F78E  EB 03                     JMP 0x0041f793
LAB_0041f790:
0041F790  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
LAB_0041f793:
0041F793  8B 86 11 02 00 00         MOV EAX,dword ptr [ESI + 0x211]
0041F799  85 C0                     TEST EAX,EAX
0041F79B  0F 84 82 00 00 00         JZ 0x0041f823
0041F7A1  8B 16                     MOV EDX,dword ptr [ESI]
0041F7A3  8B CE                     MOV ECX,ESI
0041F7A5  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
0041F7A8  83 F8 07                  CMP EAX,0x7
0041F7AB  77 37                     JA 0x0041f7e4
switchD_0041f7ad::switchD:
0041F7AD  FF 24 85 94 F8 41 00      JMP dword ptr [EAX*0x4 + 0x41f894]
switchD_0041f7ad::caseD_0:
0041F7B4  C6 45 FC 0A               MOV byte ptr [EBP + -0x4],0xa
0041F7B8  EB 2E                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_1:
0041F7BA  C6 45 FC 10               MOV byte ptr [EBP + -0x4],0x10
0041F7BE  EB 28                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_2:
0041F7C0  C6 45 FC 16               MOV byte ptr [EBP + -0x4],0x16
0041F7C4  EB 22                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_3:
0041F7C6  C6 45 FC 1C               MOV byte ptr [EBP + -0x4],0x1c
0041F7CA  EB 1C                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_4:
0041F7CC  C6 45 FC 22               MOV byte ptr [EBP + -0x4],0x22
0041F7D0  EB 16                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_5:
0041F7D2  C6 45 FC 28               MOV byte ptr [EBP + -0x4],0x28
0041F7D6  EB 10                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_6:
0041F7D8  C6 45 FC 2E               MOV byte ptr [EBP + -0x4],0x2e
0041F7DC  EB 0A                     JMP 0x0041f7e8
switchD_0041f7ad::caseD_7:
0041F7DE  C6 45 FC 34               MOV byte ptr [EBP + -0x4],0x34
0041F7E2  EB 04                     JMP 0x0041f7e8
switchD_0041f7ad::default:
0041F7E4  C6 45 FC FF               MOV byte ptr [EBP + -0x4],0xff
LAB_0041f7e8:
0041F7E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0041F7EB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041F7EE  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
0041F7F4  6A 00                     PUSH 0x0
0041F7F6  50                        PUSH EAX
0041F7F7  51                        PUSH ECX
0041F7F8  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041F7FE  52                        PUSH EDX
0041F7FF  E8 2C 6E 2C 00            CALL 0x006e6630
0041F804  6A 00                     PUSH 0x0
0041F806  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0041F80C  E8 BB 5A FE FF            CALL 0x004052cc
0041F811  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041F817  50                        PUSH EAX
0041F818  E8 53 70 2C 00            CALL 0x006e6870
0041F81D  89 9E 29 02 00 00         MOV dword ptr [ESI + 0x229],EBX
LAB_0041f823:
0041F823  5F                        POP EDI
0041F824  5E                        POP ESI
0041F825  5B                        POP EBX
0041F826  8B E5                     MOV ESP,EBP
0041F828  5D                        POP EBP
0041F829  C3                        RET
