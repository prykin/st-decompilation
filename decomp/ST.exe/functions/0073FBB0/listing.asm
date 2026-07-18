FUN_0073fbb0:
0073FBB0  55                        PUSH EBP
0073FBB1  8B EC                     MOV EBP,ESP
0073FBB3  83 EC 0C                  SUB ESP,0xc
0073FBB6  66 C7 45 FC 00 00         MOV word ptr [EBP + -0x4],0x0
0073FBBC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FBBF  83 E0 10                  AND EAX,0x10
0073FBC2  85 C0                     TEST EAX,EAX
0073FBC4  74 0B                     JZ 0x0073fbd1
0073FBC6  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073FBCA  80 C9 01                  OR CL,0x1
0073FBCD  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_0073fbd1:
0073FBD1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FBD4  83 E2 08                  AND EDX,0x8
0073FBD7  85 D2                     TEST EDX,EDX
0073FBD9  74 0A                     JZ 0x0073fbe5
0073FBDB  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073FBDF  0C 04                     OR AL,0x4
0073FBE1  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
LAB_0073fbe5:
0073FBE5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FBE8  83 E1 04                  AND ECX,0x4
0073FBEB  85 C9                     TEST ECX,ECX
0073FBED  74 0B                     JZ 0x0073fbfa
0073FBEF  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0073FBF3  80 CA 08                  OR DL,0x8
0073FBF6  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
LAB_0073fbfa:
0073FBFA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FBFD  83 E0 02                  AND EAX,0x2
0073FC00  85 C0                     TEST EAX,EAX
0073FC02  74 0B                     JZ 0x0073fc0f
0073FC04  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073FC08  80 C9 10                  OR CL,0x10
0073FC0B  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_0073fc0f:
0073FC0F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FC12  83 E2 01                  AND EDX,0x1
0073FC15  85 D2                     TEST EDX,EDX
0073FC17  74 0A                     JZ 0x0073fc23
0073FC19  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073FC1D  0C 20                     OR AL,0x20
0073FC1F  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
LAB_0073fc23:
0073FC23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FC26  81 E1 00 00 08 00         AND ECX,0x80000
0073FC2C  85 C9                     TEST ECX,ECX
0073FC2E  74 0B                     JZ 0x0073fc3b
0073FC30  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0073FC34  80 CA 02                  OR DL,0x2
0073FC37  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
LAB_0073fc3b:
0073FC3B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FC3E  25 00 03 00 00            AND EAX,0x300
0073FC43  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073FC46  81 7D F8 00 02 00 00      CMP dword ptr [EBP + -0x8],0x200
0073FC4D  77 1A                     JA 0x0073fc69
0073FC4F  81 7D F8 00 02 00 00      CMP dword ptr [EBP + -0x8],0x200
0073FC56  74 26                     JZ 0x0073fc7e
0073FC58  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073FC5C  74 16                     JZ 0x0073fc74
0073FC5E  81 7D F8 00 01 00 00      CMP dword ptr [EBP + -0x8],0x100
0073FC65  74 24                     JZ 0x0073fc8b
0073FC67  EB 3A                     JMP 0x0073fca3
LAB_0073fc69:
0073FC69  81 7D F8 00 03 00 00      CMP dword ptr [EBP + -0x8],0x300
0073FC70  74 26                     JZ 0x0073fc98
0073FC72  EB 2F                     JMP 0x0073fca3
LAB_0073fc74:
0073FC74  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073FC78  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
0073FC7C  EB 25                     JMP 0x0073fca3
LAB_0073fc7e:
0073FC7E  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0073FC82  80 CE 08                  OR DH,0x8
0073FC85  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0073FC89  EB 18                     JMP 0x0073fca3
LAB_0073fc8b:
0073FC8B  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073FC8F  80 CC 04                  OR AH,0x4
0073FC92  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0073FC96  EB 0B                     JMP 0x0073fca3
LAB_0073fc98:
0073FC98  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073FC9C  80 CD 0C                  OR CH,0xc
0073FC9F  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_0073fca3:
0073FCA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FCA6  81 E2 00 00 03 00         AND EDX,0x30000
0073FCAC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0073FCAF  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0073FCB3  74 14                     JZ 0x0073fcc9
0073FCB5  81 7D F4 00 00 01 00      CMP dword ptr [EBP + -0xc],0x10000
0073FCBC  74 18                     JZ 0x0073fcd6
0073FCBE  81 7D F4 00 00 02 00      CMP dword ptr [EBP + -0xc],0x20000
0073FCC5  74 1C                     JZ 0x0073fce3
0073FCC7  EB 22                     JMP 0x0073fceb
LAB_0073fcc9:
0073FCC9  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073FCCD  80 CC 03                  OR AH,0x3
0073FCD0  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0073FCD4  EB 15                     JMP 0x0073fceb
LAB_0073fcd6:
0073FCD6  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073FCDA  80 CD 02                  OR CH,0x2
0073FCDD  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
0073FCE1  EB 08                     JMP 0x0073fceb
LAB_0073fce3:
0073FCE3  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0073FCE7  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
LAB_0073fceb:
0073FCEB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FCEE  25 00 00 04 00            AND EAX,0x40000
0073FCF3  85 C0                     TEST EAX,EAX
0073FCF5  74 0B                     JZ 0x0073fd02
0073FCF7  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073FCFB  80 CD 10                  OR CH,0x10
0073FCFE  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_0073fd02:
0073FD02  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073FD06  8B E5                     MOV ESP,EBP
0073FD08  5D                        POP EBP
0073FD09  C3                        RET
