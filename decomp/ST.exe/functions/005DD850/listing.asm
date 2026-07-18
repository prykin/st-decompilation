StartSystemTy::AddToChat:
005DD850  55                        PUSH EBP
005DD851  8B EC                     MOV EBP,ESP
005DD853  83 EC 74                  SUB ESP,0x74
005DD856  53                        PUSH EBX
005DD857  56                        PUSH ESI
005DD858  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005DD85B  57                        PUSH EDI
005DD85C  B9 08 00 00 00            MOV ECX,0x8
005DD861  33 C0                     XOR EAX,EAX
005DD863  8D 7D D0                  LEA EDI,[EBP + -0x30]
005DD866  8D 55 90                  LEA EDX,[EBP + -0x70]
005DD869  F3 AB                     STOSD.REP ES:EDI
005DD86B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DD870  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005DD873  6A 00                     PUSH 0x0
005DD875  52                        PUSH EDX
005DD876  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005DD879  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DD87F  E8 6C FF 14 00            CALL 0x0072d7f0
005DD884  8B F0                     MOV ESI,EAX
005DD886  83 C4 08                  ADD ESP,0x8
005DD889  85 F6                     TEST ESI,ESI
005DD88B  0F 85 BF 01 00 00         JNZ 0x005dda50
005DD891  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005DD894  85 F6                     TEST ESI,ESI
005DD896  0F 84 A2 01 00 00         JZ 0x005dda3e
005DD89C  6A 01                     PUSH 0x1
005DD89E  6A 02                     PUSH 0x2
005DD8A0  50                        PUSH EAX
005DD8A1  E8 4A 7C 0D 00            CALL 0x006b54f0
005DD8A6  8B D8                     MOV EBX,EAX
005DD8A8  85 DB                     TEST EBX,EBX
005DD8AA  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005DD8AD  0F 84 8B 01 00 00         JZ 0x005dda3e
005DD8B3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005DD8B6  8D 45 D0                  LEA EAX,[EBP + -0x30]
005DD8B9  50                        PUSH EAX
005DD8BA  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005DD8BE  8B 8F 50 05 00 00         MOV ECX,dword ptr [EDI + 0x550]
005DD8C4  C7 45 E0 26 00 00 00      MOV dword ptr [EBP + -0x20],0x26
005DD8CB  51                        PUSH ECX
005DD8CC  6A 02                     PUSH 0x2
005DD8CE  8B CF                     MOV ECX,EDI
005DD8D0  E8 9B 80 10 00            CALL 0x006e5970
005DD8D5  8B 15 FA C4 80 00         MOV EDX,dword ptr [0x0080c4fa]
005DD8DB  8B 45 E6                  MOV EAX,dword ptr [EBP + -0x1a]
005DD8DE  25 FF FF 00 00            AND EAX,0xffff
005DD8E3  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005DD8E6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005DD8E9  83 E9 05                  SUB ECX,0x5
005DD8EC  3B C1                     CMP EAX,ECX
005DD8EE  7C 04                     JL 0x005dd8f4
005DD8F0  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005dd8f4:
005DD8F4  56                        PUSH ESI
005DD8F5  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
005DD8FB  68 B4 D8 7C 00            PUSH 0x7cd8b4
005DD900  68 3A F3 80 00            PUSH 0x80f33a
005DD905  FF D6                     CALL ESI
005DD907  83 C4 0C                  ADD ESP,0xc
005DD90A  68 3A F3 80 00            PUSH 0x80f33a
005DD90F  53                        PUSH EBX
005DD910  E8 8B 81 0D 00            CALL 0x006b5aa0
005DD915  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DD918  83 C2 40                  ADD EDX,0x40
005DD91B  52                        PUSH EDX
005DD91C  68 AC D8 7C 00            PUSH 0x7cd8ac
005DD921  68 3A F3 80 00            PUSH 0x80f33a
005DD926  FF D6                     CALL ESI
005DD928  83 C4 0C                  ADD ESP,0xc
005DD92B  68 3A F3 80 00            PUSH 0x80f33a
005DD930  53                        PUSH EBX
005DD931  E8 6A 81 0D 00            CALL 0x006b5aa0
005DD936  8B 87 7E 06 00 00         MOV EAX,dword ptr [EDI + 0x67e]
005DD93C  6A 01                     PUSH 0x1
005DD93E  6A FF                     PUSH -0x1
005DD940  6A 00                     PUSH 0x0
005DD942  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005DD945  51                        PUSH ECX
005DD946  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
005DD949  68 D8 21 7C 00            PUSH 0x7c21d8
005DD94E  53                        PUSH EBX
005DD94F  E8 9C 48 13 00            CALL 0x007121f0
005DD954  8B F0                     MOV ESI,EAX
005DD956  85 F6                     TEST ESI,ESI
005DD958  74 45                     JZ 0x005dd99f
005DD95A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005DD95D  85 C0                     TEST EAX,EAX
005DD95F  74 0A                     JZ 0x005dd96b
005DD961  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
005DD964  56                        PUSH ESI
005DD965  56                        PUSH ESI
005DD966  E8 65 50 13 00            CALL 0x007129d0
LAB_005dd96b:
005DD96B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005DD96E  33 DB                     XOR EBX,EBX
005DD970  85 C0                     TEST EAX,EAX
005DD972  7E 22                     JLE 0x005dd996
005DD974  3B D8                     CMP EBX,EAX
005DD976  7D 08                     JGE 0x005dd980
LAB_005dd978:
005DD978  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005DD97B  8B 04 9A                  MOV EAX,dword ptr [EDX + EBX*0x4]
005DD97E  EB 02                     JMP 0x005dd982
LAB_005dd980:
005DD980  33 C0                     XOR EAX,EAX
LAB_005dd982:
005DD982  50                        PUSH EAX
005DD983  A1 FA C4 80 00            MOV EAX,[0x0080c4fa]
005DD988  50                        PUSH EAX
005DD989  E8 12 81 0D 00            CALL 0x006b5aa0
005DD98E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005DD991  43                        INC EBX
005DD992  3B D8                     CMP EBX,EAX
005DD994  7C E2                     JL 0x005dd978
LAB_005dd996:
005DD996  56                        PUSH ESI
005DD997  E8 D4 7B 0D 00            CALL 0x006b5570
005DD99C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_005dd99f:
005DD99F  53                        PUSH EBX
005DD9A0  E8 CB 7B 0D 00            CALL 0x006b5570
005DD9A5  8B 0D FA C4 80 00         MOV ECX,dword ptr [0x0080c4fa]
005DD9AB  BE 01 00 00 00            MOV ESI,0x1
005DD9B0  C7 45 E0 28 00 00 00      MOV dword ptr [EBP + -0x20],0x28
005DD9B7  66 89 75 E4               MOV word ptr [EBP + -0x1c],SI
005DD9BB  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
005DD9BF  8B 8F 50 05 00 00         MOV ECX,dword ptr [EDI + 0x550]
005DD9C5  8D 45 D0                  LEA EAX,[EBP + -0x30]
005DD9C8  66 89 55 E6               MOV word ptr [EBP + -0x1a],DX
005DD9CC  50                        PUSH EAX
005DD9CD  51                        PUSH ECX
005DD9CE  6A 02                     PUSH 0x2
005DD9D0  8B CF                     MOV ECX,EDI
005DD9D2  E8 99 7F 10 00            CALL 0x006e5970
005DD9D7  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005DD9DA  33 C9                     XOR ECX,ECX
005DD9DC  84 C0                     TEST AL,AL
005DD9DE  C7 45 E0 22 00 00 00      MOV dword ptr [EBP + -0x20],0x22
005DD9E5  66 89 4D E4               MOV word ptr [EBP + -0x1c],CX
005DD9E9  74 19                     JZ 0x005dda04
005DD9EB  8B 15 FA C4 80 00         MOV EDX,dword ptr [0x0080c4fa]
005DD9F1  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005DD9F4  83 F8 06                  CMP EAX,0x6
005DD9F7  7D 06                     JGE 0x005dd9ff
005DD9F9  66 89 4D E6               MOV word ptr [EBP + -0x1a],CX
005DD9FD  EB 0D                     JMP 0x005dda0c
LAB_005dd9ff:
005DD9FF  83 C0 FB                  ADD EAX,-0x5
005DDA02  EB 04                     JMP 0x005dda08
LAB_005dda04:
005DDA04  66 8B 45 F0               MOV AX,word ptr [EBP + -0x10]
LAB_005dda08:
005DDA08  66 89 45 E6               MOV word ptr [EBP + -0x1a],AX
LAB_005dda0c:
005DDA0C  8B 97 50 05 00 00         MOV EDX,dword ptr [EDI + 0x550]
005DDA12  8D 4D D0                  LEA ECX,[EBP + -0x30]
005DDA15  51                        PUSH ECX
005DDA16  52                        PUSH EDX
005DDA17  6A 02                     PUSH 0x2
005DDA19  8B CF                     MOV ECX,EDI
005DDA1B  E8 50 7F 10 00            CALL 0x006e5970
005DDA20  8B 8F 50 05 00 00         MOV ECX,dword ptr [EDI + 0x550]
005DDA26  8D 45 D0                  LEA EAX,[EBP + -0x30]
005DDA29  50                        PUSH EAX
005DDA2A  51                        PUSH ECX
005DDA2B  6A 02                     PUSH 0x2
005DDA2D  8B CF                     MOV ECX,EDI
005DDA2F  C7 45 E0 20 00 00 00      MOV dword ptr [EBP + -0x20],0x20
005DDA36  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005DDA39  E8 32 7F 10 00            CALL 0x006e5970
LAB_005dda3e:
005DDA3E  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
005DDA41  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DDA47  5F                        POP EDI
005DDA48  5E                        POP ESI
005DDA49  5B                        POP EBX
005DDA4A  8B E5                     MOV ESP,EBP
005DDA4C  5D                        POP EBP
005DDA4D  C2 04 00                  RET 0x4
LAB_005dda50:
005DDA50  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005DDA53  68 8C D8 7C 00            PUSH 0x7cd88c
005DDA58  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DDA5D  56                        PUSH ESI
005DDA5E  6A 00                     PUSH 0x0
005DDA60  68 72 03 00 00            PUSH 0x372
005DDA65  68 18 D7 7C 00            PUSH 0x7cd718
005DDA6A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DDA6F  E8 5C FA 0C 00            CALL 0x006ad4d0
005DDA74  83 C4 18                  ADD ESP,0x18
005DDA77  85 C0                     TEST EAX,EAX
005DDA79  74 01                     JZ 0x005dda7c
005DDA7B  CC                        INT3
LAB_005dda7c:
005DDA7C  68 72 03 00 00            PUSH 0x372
005DDA81  68 18 D7 7C 00            PUSH 0x7cd718
005DDA86  6A 00                     PUSH 0x0
005DDA88  56                        PUSH ESI
005DDA89  E8 B2 83 0C 00            CALL 0x006a5e40
005DDA8E  5F                        POP EDI
005DDA8F  5E                        POP ESI
005DDA90  5B                        POP EBX
005DDA91  8B E5                     MOV ESP,EBP
005DDA93  5D                        POP EBP
005DDA94  C2 04 00                  RET 0x4
