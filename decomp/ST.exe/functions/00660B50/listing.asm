FUN_00660b50:
00660B50  55                        PUSH EBP
00660B51  8B EC                     MOV EBP,ESP
00660B53  83 EC 10                  SUB ESP,0x10
00660B56  8B C1                     MOV EAX,ECX
00660B58  56                        PUSH ESI
00660B59  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00660B5C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00660B5F  85 C9                     TEST ECX,ECX
00660B61  C7 80 A7 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xa7],0x0
00660B6B  75 66                     JNZ 0x00660bd3
00660B6D  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
00660B71  33 C9                     XOR ECX,ECX
00660B73  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00660B76  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00660B7A  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00660B7E  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00660B82  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00660B86  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
00660B8A  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
00660B8E  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
00660B92  66 81 FA FE FF            CMP DX,0xfffe
00660B97  0F 84 FA 00 00 00         JZ 0x00660c97
00660B9D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660BA3  85 C9                     TEST ECX,ECX
00660BA5  0F 84 EC 00 00 00         JZ 0x00660c97
00660BAB  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
00660BAE  52                        PUSH EDX
00660BAF  50                        PUSH EAX
00660BB0  E8 44 51 DA FF            CALL 0x00405cf9
00660BB5  85 C0                     TEST EAX,EAX
00660BB7  0F 84 DA 00 00 00         JZ 0x00660c97
00660BBD  8B 10                     MOV EDX,dword ptr [EAX]
00660BBF  8D 4D F8                  LEA ECX,[EBP + -0x8]
00660BC2  51                        PUSH ECX
00660BC3  6A 0C                     PUSH 0xc
00660BC5  8B C8                     MOV ECX,EAX
00660BC7  FF 52 08                  CALL dword ptr [EDX + 0x8]
00660BCA  33 C0                     XOR EAX,EAX
00660BCC  5E                        POP ESI
00660BCD  8B E5                     MOV ESP,EBP
00660BCF  5D                        POP EBP
00660BD0  C2 10 00                  RET 0x10
LAB_00660bd3:
00660BD3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00660BD6  33 D2                     XOR EDX,EDX
00660BD8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00660BDB  66 85 F6                  TEST SI,SI
00660BDE  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
00660BE2  0F 8C AF 00 00 00         JL 0x00660c97
00660BE8  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00660BEF  66 3B F1                  CMP SI,CX
00660BF2  0F 8D 9F 00 00 00         JGE 0x00660c97
00660BF8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00660BFB  66 85 D2                  TEST DX,DX
00660BFE  0F 8C 93 00 00 00         JL 0x00660c97
00660C04  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00660C0B  0F 8D 86 00 00 00         JGE 0x00660c97
00660C11  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00660C14  66 85 C0                  TEST AX,AX
00660C17  7C 7E                     JL 0x00660c97
00660C19  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00660C20  7D 75                     JGE 0x00660c97
00660C22  53                        PUSH EBX
00660C23  57                        PUSH EDI
00660C24  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00660C2B  0F BF D8                  MOVSX EBX,AX
00660C2E  0F AF FB                  IMUL EDI,EBX
00660C31  0F BF C9                  MOVSX ECX,CX
00660C34  0F BF DA                  MOVSX EBX,DX
00660C37  0F AF CB                  IMUL ECX,EBX
00660C3A  03 F9                     ADD EDI,ECX
00660C3C  0F BF CE                  MOVSX ECX,SI
00660C3F  03 F9                     ADD EDI,ECX
00660C41  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00660C47  8B 1C F9                  MOV EBX,dword ptr [ECX + EDI*0x8]
00660C4A  5F                        POP EDI
00660C4B  85 DB                     TEST EBX,EBX
00660C4D  5B                        POP EBX
00660C4E  74 47                     JZ 0x00660c97
00660C50  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
00660C54  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00660C57  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
00660C5B  66 89 75 F0               MOV word ptr [EBP + -0x10],SI
00660C5F  66 8B 42 7D               MOV AX,word ptr [EDX + 0x7d]
00660C63  66 3D FE FF               CMP AX,0xfffe
00660C67  74 2E                     JZ 0x00660c97
00660C69  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660C6F  85 C9                     TEST ECX,ECX
00660C71  74 24                     JZ 0x00660c97
00660C73  8A 52 24                  MOV DL,byte ptr [EDX + 0x24]
00660C76  50                        PUSH EAX
00660C77  52                        PUSH EDX
00660C78  E8 7C 50 DA FF            CALL 0x00405cf9
00660C7D  85 C0                     TEST EAX,EAX
00660C7F  74 16                     JZ 0x00660c97
00660C81  8B 10                     MOV EDX,dword ptr [EAX]
00660C83  8D 4D F0                  LEA ECX,[EBP + -0x10]
00660C86  51                        PUSH ECX
00660C87  6A 12                     PUSH 0x12
00660C89  8B C8                     MOV ECX,EAX
00660C8B  FF 52 08                  CALL dword ptr [EDX + 0x8]
00660C8E  33 C0                     XOR EAX,EAX
00660C90  5E                        POP ESI
00660C91  8B E5                     MOV ESP,EBP
00660C93  5D                        POP EBP
00660C94  C2 10 00                  RET 0x10
LAB_00660c97:
00660C97  83 C8 FF                  OR EAX,0xffffffff
00660C9A  5E                        POP ESI
00660C9B  8B E5                     MOV ESP,EBP
00660C9D  5D                        POP EBP
00660C9E  C2 10 00                  RET 0x10
