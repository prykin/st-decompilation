FUN_0061e7f0:
0061E7F0  55                        PUSH EBP
0061E7F1  8B EC                     MOV EBP,ESP
0061E7F3  83 EC 7C                  SUB ESP,0x7c
0061E7F6  56                        PUSH ESI
0061E7F7  8B F1                     MOV ESI,ECX
0061E7F9  33 D2                     XOR EDX,EDX
0061E7FB  57                        PUSH EDI
0061E7FC  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
0061E802  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061E808  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0061E80E  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0061E811  03 C0                     ADD EAX,EAX
0061E813  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0061E816  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0061E81C  89 86 AC 00 00 00         MOV dword ptr [ESI + 0xac],EAX
0061E822  B9 03 00 00 00            MOV ECX,0x3
0061E827  C1 E8 10                  SHR EAX,0x10
0061E82A  F7 F1                     DIV ECX
0061E82C  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061E832  33 FF                     XOR EDI,EDI
0061E834  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0061E837  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0061E83A  03 D1                     ADD EDX,ECX
0061E83C  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0061E842  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0061E845  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0061E848  3B CF                     CMP ECX,EDI
0061E84A  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0061E84D  74 06                     JZ 0x0061e855
0061E84F  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0061E852  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0061e855:
0061E855  3B C7                     CMP EAX,EDI
0061E857  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0061E85A  0F 8E 01 08 00 00         JLE 0x0061f061
0061E860  53                        PUSH EBX
0061E861  EB 02                     JMP 0x0061e865
LAB_0061e863:
0061E863  33 FF                     XOR EDI,EDI
LAB_0061e865:
0061E865  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061E868  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061E86B  8B 1C 90                  MOV EBX,dword ptr [EAX + EDX*0x4]
0061E86E  3B DF                     CMP EBX,EDI
0061E870  7D 2B                     JGE 0x0061e89d
0061E872  83 FB FE                  CMP EBX,-0x2
0061E875  0F 85 C8 07 00 00         JNZ 0x0061f043
0061E87B  8B CA                     MOV ECX,EDX
0061E87D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0061E880  03 CA                     ADD ECX,EDX
0061E882  83 3C 88 00               CMP dword ptr [EAX + ECX*0x4],0x0
0061E886  0F 8C B7 07 00 00         JL 0x0061f043
0061E88C  33 FF                     XOR EDI,EDI
0061E88E  3B DF                     CMP EBX,EDI
0061E890  7D 0B                     JGE 0x0061e89d
0061E892  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061E895  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0061E898  03 CA                     ADD ECX,EDX
0061E89A  8B 1C 88                  MOV EBX,dword ptr [EAX + ECX*0x4]
LAB_0061e89d:
0061E89D  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0061E8A0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0061E8A3  03 CB                     ADD ECX,EBX
0061E8A5  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0061E8A8  C1 E1 02                  SHL ECX,0x2
0061E8AB  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0061E8AE  8B 14 01                  MOV EDX,dword ptr [ECX + EAX*0x1]
0061E8B1  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0061E8B4  03 CB                     ADD ECX,EBX
0061E8B6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0061E8B9  C1 E1 02                  SHL ECX,0x2
0061E8BC  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0061E8BF  8B 04 01                  MOV EAX,dword ptr [ECX + EAX*0x1]
0061E8C2  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
0061E8C8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061E8CB  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
0061E8CE  4A                        DEC EDX
0061E8CF  3B C2                     CMP EAX,EDX
0061E8D1  0F 8D 6C 07 00 00         JGE 0x0061f043
0061E8D7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061E8DA  C1 E0 02                  SHL EAX,0x2
0061E8DD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0061e8e0:
0061E8E0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0061E8E3  85 C0                     TEST EAX,EAX
0061E8E5  0F 84 2F 02 00 00         JZ 0x0061eb1a
0061E8EB  39 45 DC                  CMP dword ptr [EBP + -0x24],EAX
0061E8EE  0F 8D 26 02 00 00         JGE 0x0061eb1a
0061E8F4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0061E8F7  85 C0                     TEST EAX,EAX
0061E8F9  0F 85 1B 02 00 00         JNZ 0x0061eb1a
0061E8FF  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061E905  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061E908  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061E90B  3B D1                     CMP EDX,ECX
0061E90D  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0061E910  0F 83 8A 06 00 00         JNC 0x0061efa0
0061E916  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0061E919  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0061E91C  8B D1                     MOV EDX,ECX
0061E91E  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0061E921  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
0061E925  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
0061E928  85 FF                     TEST EDI,EDI
0061E92A  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0061E92D  0F 84 6D 06 00 00         JZ 0x0061efa0
0061E933  33 C0                     XOR EAX,EAX
0061E935  8A 47 2E                  MOV AL,byte ptr [EDI + 0x2e]
0061E938  3B C3                     CMP EAX,EBX
0061E93A  74 45                     JZ 0x0061e981
0061E93C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061E93F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0061E942  3B C2                     CMP EAX,EDX
0061E944  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
0061E94B  7D 34                     JGE 0x0061e981
LAB_0061e94d:
0061E94D  3B 45 D0                  CMP EAX,dword ptr [EBP + -0x30]
0061E950  73 1C                     JNC 0x0061e96e
0061E952  85 FF                     TEST EDI,EDI
0061E954  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0061E957  74 09                     JZ 0x0061e962
0061E959  33 D2                     XOR EDX,EDX
0061E95B  8A 57 2E                  MOV DL,byte ptr [EDI + 0x2e]
0061E95E  3B D3                     CMP EDX,EBX
0061E960  74 15                     JZ 0x0061e977
LAB_0061e962:
0061E962  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0061E965  40                        INC EAX
0061E966  03 F9                     ADD EDI,ECX
0061E968  3B C2                     CMP EAX,EDX
0061E96A  7C E1                     JL 0x0061e94d
0061E96C  EB 13                     JMP 0x0061e981
LAB_0061e96e:
0061E96E  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0061E975  EB EB                     JMP 0x0061e962
LAB_0061e977:
0061E977  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061E97A  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_0061e981:
0061E981  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0061E984  33 C0                     XOR EAX,EAX
0061E986  8A 42 2E                  MOV AL,byte ptr [EDX + 0x2e]
0061E989  3B C3                     CMP EAX,EBX
0061E98B  0F 85 89 01 00 00         JNZ 0x0061eb1a
0061E991  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0061E994  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061E997  3B D0                     CMP EDX,EAX
0061E999  73 0A                     JNC 0x0061e9a5
0061E99B  0F AF CA                  IMUL ECX,EDX
0061E99E  03 4D C0                  ADD ECX,dword ptr [EBP + -0x40]
0061E9A1  8B F9                     MOV EDI,ECX
0061E9A3  EB 02                     JMP 0x0061e9a7
LAB_0061e9a5:
0061E9A5  33 FF                     XOR EDI,EDI
LAB_0061e9a7:
0061E9A7  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061E9AD  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
0061E9B0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0061E9B3  D9 44 0A 08               FLD float ptr [EDX + ECX*0x1 + 0x8]
0061E9B7  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061E9BA  D9 44 0A 04               FLD float ptr [EDX + ECX*0x1 + 0x4]
0061E9BE  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
0061E9C1  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061E9C4  D9 46 47                  FLD float ptr [ESI + 0x47]
0061E9C7  D8 08                     FMUL float ptr [EAX]
0061E9C9  D9 C1                     FLD ST1
0061E9CB  D8 4E 7B                  FMUL float ptr [ESI + 0x7b]
0061E9CE  D9 C3                     FLD ST3
0061E9D0  D8 8E 87 00 00 00         FMUL float ptr [ESI + 0x87]
0061E9D6  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0061E9D9  01 55 F4                  ADD dword ptr [EBP + -0xc],EDX
0061E9DC  DE C1                     FADDP
0061E9DE  D9 C1                     FLD ST1
0061E9E0  D8 4E 6F                  FMUL float ptr [ESI + 0x6f]
0061E9E3  DE C1                     FADDP
0061E9E5  D9 5D 88                  FSTP float ptr [EBP + -0x78]
0061E9E8  D9 C0                     FLD ST0
0061E9EA  D8 4E 73                  FMUL float ptr [ESI + 0x73]
0061E9ED  D9 C2                     FLD ST2
0061E9EF  D8 4E 7F                  FMUL float ptr [ESI + 0x7f]
0061E9F2  DE C1                     FADDP
0061E9F4  D9 C3                     FLD ST3
0061E9F6  D8 8E 8B 00 00 00         FMUL float ptr [ESI + 0x8b]
0061E9FC  DE C1                     FADDP
0061E9FE  D9 5D 8C                  FSTP float ptr [EBP + -0x74]
0061EA01  D8 4E 77                  FMUL float ptr [ESI + 0x77]
0061EA04  D9 C9                     FXCH
0061EA06  D8 8E 83 00 00 00         FMUL float ptr [ESI + 0x83]
0061EA0C  DE C1                     FADDP
0061EA0E  D9 C9                     FXCH
0061EA10  D8 8E 8F 00 00 00         FMUL float ptr [ESI + 0x8f]
0061EA16  DE C1                     FADDP
0061EA18  D9 5D 90                  FSTP float ptr [EBP + -0x70]
0061EA1B  D9 45 88                  FLD float ptr [EBP + -0x78]
0061EA1E  D8 46 63                  FADD float ptr [ESI + 0x63]
0061EA21  D9 5F 04                  FSTP float ptr [EDI + 0x4]
0061EA24  D9 45 8C                  FLD float ptr [EBP + -0x74]
0061EA27  D8 46 67                  FADD float ptr [ESI + 0x67]
0061EA2A  D9 5F 08                  FSTP float ptr [EDI + 0x8]
0061EA2D  D9 45 90                  FLD float ptr [EBP + -0x70]
0061EA30  D8 46 6B                  FADD float ptr [ESI + 0x6b]
0061EA33  D9 5F 0C                  FSTP float ptr [EDI + 0xc]
0061EA36  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061EA3C  8B 04 98                  MOV EAX,dword ptr [EAX + EBX*0x4]
0061EA3F  D9 44 01 1C               FLD float ptr [ECX + EAX*0x1 + 0x1c]
0061EA43  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EA46  D9 44 01 18               FLD float ptr [ECX + EAX*0x1 + 0x18]
0061EA4A  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EA4D  D9 44 01 14               FLD float ptr [ECX + EAX*0x1 + 0x14]
0061EA51  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EA54  D9 C1                     FLD ST1
0061EA56  D8 4E 7B                  FMUL float ptr [ESI + 0x7b]
0061EA59  D9 C3                     FLD ST3
0061EA5B  D8 8E 87 00 00 00         FMUL float ptr [ESI + 0x87]
0061EA61  DE C1                     FADDP
0061EA63  D9 C1                     FLD ST1
0061EA65  D8 4E 6F                  FMUL float ptr [ESI + 0x6f]
0061EA68  DE C1                     FADDP
0061EA6A  D9 5D 94                  FSTP float ptr [EBP + -0x6c]
0061EA6D  D9 C0                     FLD ST0
0061EA6F  D8 4E 73                  FMUL float ptr [ESI + 0x73]
0061EA72  D9 C2                     FLD ST2
0061EA74  D8 4E 7F                  FMUL float ptr [ESI + 0x7f]
0061EA77  DE C1                     FADDP
0061EA79  D9 C3                     FLD ST3
0061EA7B  D8 8E 8B 00 00 00         FMUL float ptr [ESI + 0x8b]
0061EA81  DE C1                     FADDP
0061EA83  D9 5D 98                  FSTP float ptr [EBP + -0x68]
0061EA86  D8 4E 77                  FMUL float ptr [ESI + 0x77]
0061EA89  D9 C9                     FXCH
0061EA8B  D8 8E 83 00 00 00         FMUL float ptr [ESI + 0x83]
0061EA91  DE C1                     FADDP
0061EA93  D9 C9                     FXCH
0061EA95  D8 8E 8F 00 00 00         FMUL float ptr [ESI + 0x8f]
0061EA9B  DE C1                     FADDP
0061EA9D  D9 5D 9C                  FSTP float ptr [EBP + -0x64]
0061EAA0  D9 45 94                  FLD float ptr [EBP + -0x6c]
0061EAA3  D8 46 63                  FADD float ptr [ESI + 0x63]
0061EAA6  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0061EAA9  D9 45 98                  FLD float ptr [EBP + -0x68]
0061EAAC  D8 46 67                  FADD float ptr [ESI + 0x67]
0061EAAF  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0061EAB2  D9 5F 14                  FSTP float ptr [EDI + 0x14]
0061EAB5  D9 45 9C                  FLD float ptr [EBP + -0x64]
0061EAB8  D8 46 6B                  FADD float ptr [ESI + 0x6b]
0061EABB  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0061EABE  D9 55 C0                  FST float ptr [EBP + -0x40]
0061EAC1  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0061EAC4  D9 5F 18                  FSTP float ptr [EDI + 0x18]
0061EAC7  51                        PUSH ECX
0061EAC8  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0061EACB  52                        PUSH EDX
0061EACC  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0061EACF  50                        PUSH EAX
0061EAD0  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0061EAD3  51                        PUSH ECX
0061EAD4  8B 4F 26                  MOV ECX,dword ptr [EDI + 0x26]
0061EAD7  52                        PUSH EDX
0061EAD8  50                        PUSH EAX
0061EAD9  51                        PUSH ECX
0061EADA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061EAE0  E8 9B A1 0C 00            CALL 0x006e8c80
0061EAE5  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0061EAE8  8B 0D D0 32 80 00         MOV ECX,dword ptr [0x008032d0]
0061EAEE  8B 47 21                  MOV EAX,dword ptr [EDI + 0x21]
0061EAF1  C1 E2 09                  SHL EDX,0x9
0061EAF4  03 D1                     ADD EDX,ECX
0061EAF6  8B 4F 26                  MOV ECX,dword ptr [EDI + 0x26]
0061EAF9  52                        PUSH EDX
0061EAFA  50                        PUSH EAX
0061EAFB  51                        PUSH ECX
0061EAFC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061EB02  E8 19 A2 0C 00            CALL 0x006e8d20
0061EB07  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0061EB0A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061EB0D  41                        INC ECX
0061EB0E  40                        INC EAX
0061EB0F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0061EB12  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061EB15  E9 86 04 00 00            JMP 0x0061efa0
LAB_0061eb1a:
0061EB1A  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061EB20  8B 04 9A                  MOV EAX,dword ptr [EDX + EBX*0x4]
0061EB23  8D 0C 9A                  LEA ECX,[EDX + EBX*0x4]
0061EB26  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0061EB29  03 C2                     ADD EAX,EDX
0061EB2B  D9 40 08                  FLD float ptr [EAX + 0x8]
0061EB2E  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EB31  D9 40 04                  FLD float ptr [EAX + 0x4]
0061EB34  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EB37  D9 46 47                  FLD float ptr [ESI + 0x47]
0061EB3A  D8 08                     FMUL float ptr [EAX]
0061EB3C  D9 C1                     FLD ST1
0061EB3E  D8 4E 7B                  FMUL float ptr [ESI + 0x7b]
0061EB41  D9 C3                     FLD ST3
0061EB43  D8 8E 87 00 00 00         FMUL float ptr [ESI + 0x87]
0061EB49  8B 78 20                  MOV EDI,dword ptr [EAX + 0x20]
0061EB4C  01 7D F4                  ADD dword ptr [EBP + -0xc],EDI
0061EB4F  DE C1                     FADDP
0061EB51  D9 C1                     FLD ST1
0061EB53  D8 4E 6F                  FMUL float ptr [ESI + 0x6f]
0061EB56  DE C1                     FADDP
0061EB58  D9 5D 88                  FSTP float ptr [EBP + -0x78]
0061EB5B  D9 C1                     FLD ST1
0061EB5D  D8 4E 7F                  FMUL float ptr [ESI + 0x7f]
0061EB60  D9 C3                     FLD ST3
0061EB62  D8 8E 8B 00 00 00         FMUL float ptr [ESI + 0x8b]
0061EB68  DE C1                     FADDP
0061EB6A  D9 C1                     FLD ST1
0061EB6C  D8 4E 73                  FMUL float ptr [ESI + 0x73]
0061EB6F  DE C1                     FADDP
0061EB71  D9 5D 8C                  FSTP float ptr [EBP + -0x74]
0061EB74  D9 C9                     FXCH
0061EB76  D8 8E 83 00 00 00         FMUL float ptr [ESI + 0x83]
0061EB7C  D9 CA                     FXCH ST2
0061EB7E  D8 8E 8F 00 00 00         FMUL float ptr [ESI + 0x8f]
0061EB84  DE C2                     FADDP ST2,ST0
0061EB86  D8 4E 77                  FMUL float ptr [ESI + 0x77]
0061EB89  DE C1                     FADDP
0061EB8B  D9 45 88                  FLD float ptr [EBP + -0x78]
0061EB8E  D8 46 63                  FADD float ptr [ESI + 0x63]
0061EB91  D9 5D 88                  FSTP float ptr [EBP + -0x78]
0061EB94  D9 45 8C                  FLD float ptr [EBP + -0x74]
0061EB97  D8 46 67                  FADD float ptr [ESI + 0x67]
0061EB9A  D9 5D 8C                  FSTP float ptr [EBP + -0x74]
0061EB9D  D8 46 6B                  FADD float ptr [ESI + 0x6b]
0061EBA0  D9 5D 90                  FSTP float ptr [EBP + -0x70]
0061EBA3  8B 01                     MOV EAX,dword ptr [ECX]
0061EBA5  D9 44 02 1C               FLD float ptr [EDX + EAX*0x1 + 0x1c]
0061EBA9  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EBAC  D9 44 02 18               FLD float ptr [EDX + EAX*0x1 + 0x18]
0061EBB0  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EBB3  D9 44 02 14               FLD float ptr [EDX + EAX*0x1 + 0x14]
0061EBB7  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061EBBA  D9 C1                     FLD ST1
0061EBBC  D8 4E 7B                  FMUL float ptr [ESI + 0x7b]
0061EBBF  D9 C3                     FLD ST3
0061EBC1  D8 8E 87 00 00 00         FMUL float ptr [ESI + 0x87]
0061EBC7  DE C1                     FADDP
0061EBC9  D9 C1                     FLD ST1
0061EBCB  D8 4E 6F                  FMUL float ptr [ESI + 0x6f]
0061EBCE  DE C1                     FADDP
0061EBD0  D9 5D 94                  FSTP float ptr [EBP + -0x6c]
0061EBD3  D9 C0                     FLD ST0
0061EBD5  D8 4E 73                  FMUL float ptr [ESI + 0x73]
0061EBD8  D9 C2                     FLD ST2
0061EBDA  D8 4E 7F                  FMUL float ptr [ESI + 0x7f]
0061EBDD  DE C1                     FADDP
0061EBDF  D9 C3                     FLD ST3
0061EBE1  D8 8E 8B 00 00 00         FMUL float ptr [ESI + 0x8b]
0061EBE7  DE C1                     FADDP
0061EBE9  D9 5D 98                  FSTP float ptr [EBP + -0x68]
0061EBEC  D8 4E 77                  FMUL float ptr [ESI + 0x77]
0061EBEF  D9 C9                     FXCH
0061EBF1  D8 8E 83 00 00 00         FMUL float ptr [ESI + 0x83]
0061EBF7  DE C1                     FADDP
0061EBF9  D9 C9                     FXCH
0061EBFB  D8 8E 8F 00 00 00         FMUL float ptr [ESI + 0x8f]
0061EC01  DE C1                     FADDP
0061EC03  D9 45 94                  FLD float ptr [EBP + -0x6c]
0061EC06  D8 46 63                  FADD float ptr [ESI + 0x63]
0061EC09  D9 5D 94                  FSTP float ptr [EBP + -0x6c]
0061EC0C  D9 45 98                  FLD float ptr [EBP + -0x68]
0061EC0F  D8 46 67                  FADD float ptr [ESI + 0x67]
0061EC12  D9 5D 98                  FSTP float ptr [EBP + -0x68]
0061EC15  D8 46 6B                  FADD float ptr [ESI + 0x6b]
0061EC18  D9 5D 9C                  FSTP float ptr [EBP + -0x64]
0061EC1B  D9 45 94                  FLD float ptr [EBP + -0x6c]
0061EC1E  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061EC24  DF E0                     FNSTSW AX
0061EC26  F6 C4 01                  TEST AH,0x1
0061EC29  0F 85 E0 03 00 00         JNZ 0x0061f00f
0061EC2F  D9 45 98                  FLD float ptr [EBP + -0x68]
0061EC32  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061EC38  DF E0                     FNSTSW AX
0061EC3A  F6 C4 01                  TEST AH,0x1
0061EC3D  0F 85 CC 03 00 00         JNZ 0x0061f00f
0061EC43  D9 45 9C                  FLD float ptr [EBP + -0x64]
0061EC46  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061EC4C  DF E0                     FNSTSW AX
0061EC4E  F6 C4 01                  TEST AH,0x1
0061EC51  0F 85 B8 03 00 00         JNZ 0x0061f00f
0061EC57  D9 45 94                  FLD float ptr [EBP + -0x6c]
0061EC5A  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061EC60  E8 23 F6 10 00            CALL 0x0072e288
0061EC65  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0061EC6C  0F 8D 9D 03 00 00         JGE 0x0061f00f
0061EC72  D9 45 98                  FLD float ptr [EBP + -0x68]
0061EC75  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061EC7B  E8 08 F6 10 00            CALL 0x0072e288
0061EC80  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0061EC87  0F 8D 82 03 00 00         JGE 0x0061f00f
0061EC8D  D9 45 9C                  FLD float ptr [EBP + -0x64]
0061EC90  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
0061EC96  E8 ED F5 10 00            CALL 0x0072e288
0061EC9B  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0061ECA2  0F 8D 67 03 00 00         JGE 0x0061f00f
0061ECA8  85 DB                     TEST EBX,EBX
0061ECAA  75 69                     JNZ 0x0061ed15
0061ECAC  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
0061ECB2  8B 08                     MOV ECX,dword ptr [EAX]
0061ECB4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061ECB7  83 E9 02                  SUB ECX,0x2
0061ECBA  3B C1                     CMP EAX,ECX
0061ECBC  75 57                     JNZ 0x0061ed15
0061ECBE  66 8B 56 44               MOV DX,word ptr [ESI + 0x44]
0061ECC2  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0061ECC5  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0061ECC8  53                        PUSH EBX
0061ECC9  D9 45 90                  FLD float ptr [EBP + -0x70]
0061ECCC  53                        PUSH EBX
0061ECCD  68 B1 00 00 00            PUSH 0xb1
0061ECD2  52                        PUSH EDX
0061ECD3  50                        PUSH EAX
0061ECD4  6A 32                     PUSH 0x32
0061ECD6  51                        PUSH ECX
0061ECD7  E8 AC F5 10 00            CALL 0x0072e288
0061ECDC  D9 45 8C                  FLD float ptr [EBP + -0x74]
0061ECDF  50                        PUSH EAX
0061ECE0  E8 A3 F5 10 00            CALL 0x0072e288
0061ECE5  D9 45 88                  FLD float ptr [EBP + -0x78]
0061ECE8  50                        PUSH EAX
0061ECE9  E8 9A F5 10 00            CALL 0x0072e288
0061ECEE  D9 45 9C                  FLD float ptr [EBP + -0x64]
0061ECF1  50                        PUSH EAX
0061ECF2  E8 91 F5 10 00            CALL 0x0072e288
0061ECF7  D9 45 98                  FLD float ptr [EBP + -0x68]
0061ECFA  50                        PUSH EAX
0061ECFB  E8 88 F5 10 00            CALL 0x0072e288
0061ED00  D9 45 94                  FLD float ptr [EBP + -0x6c]
0061ED03  50                        PUSH EAX
0061ED04  E8 7F F5 10 00            CALL 0x0072e288
0061ED09  50                        PUSH EAX
0061ED0A  8D 8E B0 00 00 00         LEA ECX,[ESI + 0xb0]
0061ED10  E8 01 58 DE FF            CALL 0x00404516
LAB_0061ed15:
0061ED15  8B 56 57                  MOV EDX,dword ptr [ESI + 0x57]
0061ED18  83 3C 9A 00               CMP dword ptr [EDX + EBX*0x4],0x0
0061ED1C  75 10                     JNZ 0x0061ed2e
0061ED1E  B9 02 00 00 00            MOV ECX,0x2
0061ED23  C6 45 A4 AC               MOV byte ptr [EBP + -0x5c],0xac
0061ED27  89 4D A5                  MOV dword ptr [EBP + -0x5b],ECX
0061ED2A  8B D1                     MOV EDX,ECX
0061ED2C  EB 0E                     JMP 0x0061ed3c
LAB_0061ed2e:
0061ED2E  B9 01 00 00 00            MOV ECX,0x1
0061ED33  C6 45 A4 AC               MOV byte ptr [EBP + -0x5c],0xac
0061ED37  89 4D A5                  MOV dword ptr [EBP + -0x5b],ECX
0061ED3A  8B D1                     MOV EDX,ECX
LAB_0061ed3c:
0061ED3C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061ED3F  8B 3D D0 32 80 00         MOV EDI,dword ptr [0x008032d0]
0061ED45  C1 E0 09                  SHL EAX,0x9
0061ED48  03 C7                     ADD EAX,EDI
0061ED4A  80 7E 46 00               CMP byte ptr [ESI + 0x46],0x0
0061ED4E  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0061ED51  C6 45 A9 00               MOV byte ptr [EBP + -0x57],0x0
0061ED55  75 14                     JNZ 0x0061ed6b
0061ED57  8B 3D 38 2A 80 00         MOV EDI,dword ptr [0x00802a38]
0061ED5D  8B BF E4 00 00 00         MOV EDI,dword ptr [EDI + 0xe4]
0061ED63  83 C7 32                  ADD EDI,0x32
0061ED66  89 7D AE                  MOV dword ptr [EBP + -0x52],EDI
0061ED69  EB 07                     JMP 0x0061ed72
LAB_0061ed6b:
0061ED6B  C7 45 AE 00 00 00 00      MOV dword ptr [EBP + -0x52],0x0
LAB_0061ed72:
0061ED72  6A FF                     PUSH -0x1
0061ED74  50                        PUSH EAX
0061ED75  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0061ED78  51                        PUSH ECX
0061ED79  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0061ED7C  68 AC 00 00 00            PUSH 0xac
0061ED81  52                        PUSH EDX
0061ED82  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0061ED85  50                        PUSH EAX
0061ED86  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0061ED89  51                        PUSH ECX
0061ED8A  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0061ED8D  52                        PUSH EDX
0061ED8E  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0061ED91  50                        PUSH EAX
0061ED92  51                        PUSH ECX
0061ED93  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061ED99  8D 45 AA                  LEA EAX,[EBP + -0x56]
0061ED9C  52                        PUSH EDX
0061ED9D  50                        PUSH EAX
0061ED9E  C7 45 AA FF FF FF FF      MOV dword ptr [EBP + -0x56],0xffffffff
0061EDA5  88 5D B2                  MOV byte ptr [EBP + -0x4e],BL
0061EDA8  C7 45 84 01 00 00 00      MOV dword ptr [EBP + -0x7c],0x1
0061EDAF  E8 0C 9B 0C 00            CALL 0x006e88c0
0061EDB4  8B 4D AA                  MOV ECX,dword ptr [EBP + -0x56]
0061EDB7  6A 00                     PUSH 0x0
0061EDB9  51                        PUSH ECX
0061EDBA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061EDC0  E8 DB BC 0C 00            CALL 0x006eaaa0
0061EDC5  8A 86 A7 00 00 00         MOV AL,byte ptr [ESI + 0xa7]
0061EDCB  84 C0                     TEST AL,AL
0061EDCD  0F 84 27 01 00 00         JZ 0x0061eefa
0061EDD3  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0061EDD9  C6 45 B3 01               MOV byte ptr [EBP + -0x4d],0x1
0061EDDD  85 FF                     TEST EDI,EDI
0061EDDF  0F 84 28 01 00 00         JZ 0x0061ef0d
0061EDE5  D9 45 90                  FLD float ptr [EBP + -0x70]
0061EDE8  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061EDEE  D9 45 90                  FLD float ptr [EBP + -0x70]
0061EDF1  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
0061EDF7  DF E0                     FNSTSW AX
0061EDF9  F6 C4 01                  TEST AH,0x1
0061EDFC  75 0D                     JNZ 0x0061ee0b
0061EDFE  E8 85 F4 10 00            CALL 0x0072e288
0061EE03  0F BF D0                  MOVSX EDX,AX
0061EE06  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0061EE09  EB 0C                     JMP 0x0061ee17
LAB_0061ee0b:
0061EE0B  E8 78 F4 10 00            CALL 0x0072e288
0061EE10  0F BF C0                  MOVSX EAX,AX
0061EE13  48                        DEC EAX
0061EE14  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0061ee17:
0061EE17  D9 45 8C                  FLD float ptr [EBP + -0x74]
0061EE1A  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061EE20  D9 45 8C                  FLD float ptr [EBP + -0x74]
0061EE23  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061EE29  DF E0                     FNSTSW AX
0061EE2B  F6 C4 01                  TEST AH,0x1
0061EE2E  75 0A                     JNZ 0x0061ee3a
0061EE30  E8 53 F4 10 00            CALL 0x0072e288
0061EE35  0F BF C0                  MOVSX EAX,AX
0061EE38  EB 09                     JMP 0x0061ee43
LAB_0061ee3a:
0061EE3A  E8 49 F4 10 00            CALL 0x0072e288
0061EE3F  0F BF C0                  MOVSX EAX,AX
0061EE42  48                        DEC EAX
LAB_0061ee43:
0061EE43  D9 45 88                  FLD float ptr [EBP + -0x78]
0061EE46  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061EE4C  D9 45 88                  FLD float ptr [EBP + -0x78]
0061EE4F  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061EE55  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0061EE58  DF E0                     FNSTSW AX
0061EE5A  F6 C4 01                  TEST AH,0x1
0061EE5D  75 0A                     JNZ 0x0061ee69
0061EE5F  E8 24 F4 10 00            CALL 0x0072e288
0061EE64  0F BF C0                  MOVSX EAX,AX
0061EE67  EB 09                     JMP 0x0061ee72
LAB_0061ee69:
0061EE69  E8 1A F4 10 00            CALL 0x0072e288
0061EE6E  0F BF C0                  MOVSX EAX,AX
0061EE71  48                        DEC EAX
LAB_0061ee72:
0061EE72  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0061EE79  0F 84 8E 00 00 00         JZ 0x0061ef0d
0061EE7F  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0061EE85  85 C9                     TEST ECX,ECX
0061EE87  0F 84 80 00 00 00         JZ 0x0061ef0d
0061EE8D  8D 4D BC                  LEA ECX,[EBP + -0x44]
0061EE90  8D 55 CC                  LEA EDX,[EBP + -0x34]
0061EE93  51                        PUSH ECX
0061EE94  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0061EE97  52                        PUSH EDX
0061EE98  8B 97 0C 01 00 00         MOV EDX,dword ptr [EDI + 0x10c]
0061EE9E  51                        PUSH ECX
0061EE9F  50                        PUSH EAX
0061EEA0  52                        PUSH EDX
0061EEA1  8B CF                     MOV ECX,EDI
0061EEA3  E8 AB 50 DE FF            CALL 0x00403f53
0061EEA8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0061EEAB  85 C0                     TEST EAX,EAX
0061EEAD  7C 5E                     JL 0x0061ef0d
0061EEAF  83 F8 05                  CMP EAX,0x5
0061EEB2  7D 59                     JGE 0x0061ef0d
0061EEB4  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0061EEB7  85 C0                     TEST EAX,EAX
0061EEB9  7C 52                     JL 0x0061ef0d
0061EEBB  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0061EEBE  3B C1                     CMP EAX,ECX
0061EEC0  7D 4B                     JGE 0x0061ef0d
0061EEC2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0061EEC5  8B 14 85 D0 AE 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x79aed0]
0061EECC  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0061EECF  03 C2                     ADD EAX,EDX
0061EED1  85 C0                     TEST EAX,EAX
0061EED3  7C 38                     JL 0x0061ef0d
0061EED5  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0061EED8  7D 33                     JGE 0x0061ef0d
0061EEDA  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0061EEDD  85 FF                     TEST EDI,EDI
0061EEDF  74 2C                     JZ 0x0061ef0d
0061EEE1  0F AF C1                  IMUL EAX,ECX
0061EEE4  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0061EEE7  03 C7                     ADD EAX,EDI
0061EEE9  33 C9                     XOR ECX,ECX
0061EEEB  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061EEEE  8B C1                     MOV EAX,ECX
0061EEF0  85 C0                     TEST EAX,EAX
0061EEF2  75 19                     JNZ 0x0061ef0d
0061EEF4  8B 45 AA                  MOV EAX,dword ptr [EBP + -0x56]
0061EEF7  50                        PUSH EAX
0061EEF8  EB 04                     JMP 0x0061eefe
LAB_0061eefa:
0061EEFA  8B 4D AA                  MOV ECX,dword ptr [EBP + -0x56]
0061EEFD  51                        PUSH ECX
LAB_0061eefe:
0061EEFE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061EF04  E8 57 BC 0C 00            CALL 0x006eab60
0061EF09  C6 45 B3 00               MOV byte ptr [EBP + -0x4d],0x0
LAB_0061ef0d:
0061EF0D  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061EF13  8D 55 84                  LEA EDX,[EBP + -0x7c]
0061EF16  52                        PUSH EDX
0061EF17  50                        PUSH EAX
0061EF18  E8 A3 F2 08 00            CALL 0x006ae1c0
0061EF1D  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
0061EF23  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061EF26  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
0061EF29  83 EA 02                  SUB EDX,0x2
0061EF2C  3B C2                     CMP EAX,EDX
0061EF2E  0F 84 90 00 00 00         JZ 0x0061efc4
0061EF34  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061EF3A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0061EF3D  8B 14 98                  MOV EDX,dword ptr [EAX + EBX*0x4]
0061EF40  8B 44 0A 24               MOV EAX,dword ptr [EDX + ECX*0x1 + 0x24]
0061EF44  85 C0                     TEST EAX,EAX
0061EF46  7E 4E                     JLE 0x0061ef96
0061EF48  8B 56 53                  MOV EDX,dword ptr [ESI + 0x53]
0061EF4B  8B 7E 57                  MOV EDI,dword ptr [ESI + 0x57]
0061EF4E  89 04 97                  MOV dword ptr [EDI + EDX*0x4],EAX
0061EF51  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061EF57  8B 7E 53                  MOV EDI,dword ptr [ESI + 0x53]
0061EF5A  8B 14 98                  MOV EDX,dword ptr [EAX + EBX*0x4]
0061EF5D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0061EF60  03 C7                     ADD EAX,EDI
0061EF62  8B 7E 57                  MOV EDI,dword ptr [ESI + 0x57]
0061EF65  8B 4C 0A 24               MOV ECX,dword ptr [EDX + ECX*0x1 + 0x24]
0061EF69  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0061EF6C  89 0C 87                  MOV dword ptr [EDI + EAX*0x4],ECX
0061EF6F  8B 7E 53                  MOV EDI,dword ptr [ESI + 0x53]
0061EF72  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061EF75  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061EF78  03 D7                     ADD EDX,EDI
0061EF7A  89 0C 90                  MOV dword ptr [EAX + EDX*0x4],ECX
0061EF7D  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0061EF80  8B 4E 53                  MOV ECX,dword ptr [ESI + 0x53]
0061EF83  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061EF86  03 D1                     ADD EDX,ECX
0061EF88  C7 04 90 00 00 00 00      MOV dword ptr [EAX + EDX*0x4],0x0
0061EF8F  8B 46 53                  MOV EAX,dword ptr [ESI + 0x53]
0061EF92  40                        INC EAX
0061EF93  89 46 53                  MOV dword ptr [ESI + 0x53],EAX
LAB_0061ef96:
0061EF96  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061EF99  8B 46 5B                  MOV EAX,dword ptr [ESI + 0x5b]
0061EF9C  3B C8                     CMP ECX,EAX
0061EF9E  7F 53                     JG 0x0061eff3
LAB_0061efa0:
0061EFA0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0061EFA3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061EFA6  83 C1 14                  ADD ECX,0x14
0061EFA9  40                        INC EAX
0061EFAA  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0061EFAD  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
0061EFB3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061EFB6  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
0061EFB9  4A                        DEC EDX
0061EFBA  3B C2                     CMP EAX,EDX
0061EFBC  0F 8C 1E F9 FF FF         JL 0x0061e8e0
0061EFC2  EB 7F                     JMP 0x0061f043
LAB_0061efc4:
0061EFC4  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061EFC7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061EFCA  C7 04 88 FE FF FF FF      MOV dword ptr [EAX + ECX*0x4],0xfffffffe
0061EFD1  8B 4E 53                  MOV ECX,dword ptr [ESI + 0x53]
0061EFD4  33 C0                     XOR EAX,EAX
0061EFD6  85 C9                     TEST ECX,ECX
0061EFD8  7E 10                     JLE 0x0061efea
0061EFDA  8B 56 57                  MOV EDX,dword ptr [ESI + 0x57]
LAB_0061efdd:
0061EFDD  83 3A 00                  CMP dword ptr [EDX],0x0
0061EFE0  7D 61                     JGE 0x0061f043
0061EFE2  40                        INC EAX
0061EFE3  83 C2 04                  ADD EDX,0x4
0061EFE6  3B C1                     CMP EAX,ECX
0061EFE8  7C F3                     JL 0x0061efdd
LAB_0061efea:
0061EFEA  8A 46 46                  MOV AL,byte ptr [ESI + 0x46]
0061EFED  84 C0                     TEST AL,AL
0061EFEF  75 52                     JNZ 0x0061f043
0061EFF1  EB 49                     JMP 0x0061f03c
LAB_0061eff3:
0061EFF3  8B 56 57                  MOV EDX,dword ptr [ESI + 0x57]
0061EFF6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0061EFF9  C7 04 02 00 00 00 00      MOV dword ptr [EDX + EAX*0x1],0x0
0061F000  8B 4E 57                  MOV ECX,dword ptr [ESI + 0x57]
0061F003  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0061F006  C7 04 11 00 00 00 00      MOV dword ptr [ECX + EDX*0x1],0x0
0061F00D  EB 34                     JMP 0x0061f043
LAB_0061f00f:
0061F00F  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061F012  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061F015  C7 04 88 FE FF FF FF      MOV dword ptr [EAX + ECX*0x4],0xfffffffe
0061F01C  8B 4E 53                  MOV ECX,dword ptr [ESI + 0x53]
0061F01F  33 C0                     XOR EAX,EAX
0061F021  85 C9                     TEST ECX,ECX
0061F023  7E 10                     JLE 0x0061f035
0061F025  8B 56 57                  MOV EDX,dword ptr [ESI + 0x57]
LAB_0061f028:
0061F028  83 3A 00                  CMP dword ptr [EDX],0x0
0061F02B  7D 16                     JGE 0x0061f043
0061F02D  40                        INC EAX
0061F02E  83 C2 04                  ADD EDX,0x4
0061F031  3B C1                     CMP EAX,ECX
0061F033  7C F3                     JL 0x0061f028
LAB_0061f035:
0061F035  8A 46 46                  MOV AL,byte ptr [ESI + 0x46]
0061F038  84 C0                     TEST AL,AL
0061F03A  75 07                     JNZ 0x0061f043
LAB_0061f03c:
0061F03C  8B CE                     MOV ECX,ESI
0061F03E  E8 D8 4F DE FF            CALL 0x0040401b
LAB_0061f043:
0061F043  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061F046  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
0061F04C  40                        INC EAX
0061F04D  3B C1                     CMP EAX,ECX
0061F04F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061F052  0F 8C 0B F8 FF FF         JL 0x0061e863
0061F058  5B                        POP EBX
0061F059  5F                        POP EDI
0061F05A  33 C0                     XOR EAX,EAX
0061F05C  5E                        POP ESI
0061F05D  8B E5                     MOV ESP,EBP
0061F05F  5D                        POP EBP
0061F060  C3                        RET
LAB_0061f061:
0061F061  5F                        POP EDI
0061F062  33 C0                     XOR EAX,EAX
0061F064  5E                        POP ESI
0061F065  8B E5                     MOV ESP,EBP
0061F067  5D                        POP EBP
0061F068  C3                        RET
