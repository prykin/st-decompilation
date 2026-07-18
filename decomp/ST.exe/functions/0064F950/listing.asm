FUN_0064f950:
0064F950  55                        PUSH EBP
0064F951  8B EC                     MOV EBP,ESP
0064F953  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064F956  56                        PUSH ESI
0064F957  57                        PUSH EDI
0064F958  33 FF                     XOR EDI,EDI
0064F95A  33 C9                     XOR ECX,ECX
0064F95C  BA 08 00 00 00            MOV EDX,0x8
LAB_0064f961:
0064F961  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
0064F968  0F 85 1E 01 00 00         JNZ 0x0064fa8c
0064F96E  41                        INC ECX
0064F96F  83 F9 02                  CMP ECX,0x2
0064F972  7C ED                     JL 0x0064f961
0064F974  66 8B 08                  MOV CX,word ptr [EAX]
0064F977  66 83 F9 03               CMP CX,0x3
0064F97B  7D 12                     JGE 0x0064f98f
0064F97D  C7 40 10 FF FF FF 3F      MOV dword ptr [EAX + 0x10],0x3fffffff
LAB_0064f984:
0064F984  66 83 F9 04               CMP CX,0x4
0064F988  7D 13                     JGE 0x0064f99d
0064F98A  89 78 14                  MOV dword ptr [EAX + 0x14],EDI
0064F98D  EB 1C                     JMP 0x0064f9ab
LAB_0064f98f:
0064F98F  38 90 D2 00 00 00         CMP byte ptr [EAX + 0xd2],DL
0064F995  74 ED                     JZ 0x0064f984
0064F997  5F                        POP EDI
0064F998  5E                        POP ESI
0064F999  33 C0                     XOR EAX,EAX
0064F99B  5D                        POP EBP
0064F99C  C3                        RET
LAB_0064f99d:
0064F99D  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
0064F9A3  74 06                     JZ 0x0064f9ab
0064F9A5  5F                        POP EDI
0064F9A6  5E                        POP ESI
0064F9A7  33 C0                     XOR EAX,EAX
0064F9A9  5D                        POP EBP
0064F9AA  C3                        RET
LAB_0064f9ab:
0064F9AB  83 CE FF                  OR ESI,0xffffffff
0064F9AE  66 83 F9 05               CMP CX,0x5
0064F9B2  7D 0E                     JGE 0x0064f9c2
0064F9B4  89 70 18                  MOV dword ptr [EAX + 0x18],ESI
LAB_0064f9b7:
0064F9B7  66 83 F9 06               CMP CX,0x6
0064F9BB  7D 13                     JGE 0x0064f9d0
0064F9BD  89 78 1C                  MOV dword ptr [EAX + 0x1c],EDI
0064F9C0  EB 1D                     JMP 0x0064f9df
LAB_0064f9c2:
0064F9C2  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
0064F9C8  74 ED                     JZ 0x0064f9b7
0064F9CA  5F                        POP EDI
0064F9CB  5E                        POP ESI
0064F9CC  33 C0                     XOR EAX,EAX
0064F9CE  5D                        POP EBP
0064F9CF  C3                        RET
LAB_0064f9d0:
0064F9D0  80 B8 D5 00 00 00 0A      CMP byte ptr [EAX + 0xd5],0xa
0064F9D7  74 06                     JZ 0x0064f9df
0064F9D9  5F                        POP EDI
0064F9DA  5E                        POP ESI
0064F9DB  33 C0                     XOR EAX,EAX
0064F9DD  5D                        POP EBP
0064F9DE  C3                        RET
LAB_0064f9df:
0064F9DF  66 83 F9 07               CMP CX,0x7
0064F9E3  7D 0D                     JGE 0x0064f9f2
0064F9E5  89 78 20                  MOV dword ptr [EAX + 0x20],EDI
LAB_0064f9e8:
0064F9E8  66 3B CA                  CMP CX,DX
0064F9EB  7D 13                     JGE 0x0064fa00
0064F9ED  89 78 24                  MOV dword ptr [EAX + 0x24],EDI
0064F9F0  EB 1C                     JMP 0x0064fa0e
LAB_0064f9f2:
0064F9F2  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
0064F9F8  74 EE                     JZ 0x0064f9e8
0064F9FA  5F                        POP EDI
0064F9FB  5E                        POP ESI
0064F9FC  33 C0                     XOR EAX,EAX
0064F9FE  5D                        POP EBP
0064F9FF  C3                        RET
LAB_0064fa00:
0064FA00  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
0064FA06  74 06                     JZ 0x0064fa0e
0064FA08  5F                        POP EDI
0064FA09  5E                        POP ESI
0064FA0A  33 C0                     XOR EAX,EAX
0064FA0C  5D                        POP EBP
0064FA0D  C3                        RET
LAB_0064fa0e:
0064FA0E  66 83 F9 09               CMP CX,0x9
0064FA12  7D 0E                     JGE 0x0064fa22
0064FA14  89 78 28                  MOV dword ptr [EAX + 0x28],EDI
LAB_0064fa17:
0064FA17  66 83 F9 0A               CMP CX,0xa
0064FA1B  7D 13                     JGE 0x0064fa30
0064FA1D  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
0064FA20  EB 1C                     JMP 0x0064fa3e
LAB_0064fa22:
0064FA22  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
0064FA28  74 ED                     JZ 0x0064fa17
0064FA2A  5F                        POP EDI
0064FA2B  5E                        POP ESI
0064FA2C  33 C0                     XOR EAX,EAX
0064FA2E  5D                        POP EBP
0064FA2F  C3                        RET
LAB_0064fa30:
0064FA30  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
0064FA36  74 06                     JZ 0x0064fa3e
0064FA38  5F                        POP EDI
0064FA39  5E                        POP ESI
0064FA3A  33 C0                     XOR EAX,EAX
0064FA3C  5D                        POP EBP
0064FA3D  C3                        RET
LAB_0064fa3e:
0064FA3E  66 83 F9 0B               CMP CX,0xb
0064FA42  7D 0E                     JGE 0x0064fa52
0064FA44  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
LAB_0064fa47:
0064FA47  66 83 F9 0C               CMP CX,0xc
0064FA4B  7D 13                     JGE 0x0064fa60
0064FA4D  89 70 34                  MOV dword ptr [EAX + 0x34],ESI
0064FA50  EB 1C                     JMP 0x0064fa6e
LAB_0064fa52:
0064FA52  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
0064FA58  74 ED                     JZ 0x0064fa47
0064FA5A  5F                        POP EDI
0064FA5B  5E                        POP ESI
0064FA5C  33 C0                     XOR EAX,EAX
0064FA5E  5D                        POP EBP
0064FA5F  C3                        RET
LAB_0064fa60:
0064FA60  38 90 DB 00 00 00         CMP byte ptr [EAX + 0xdb],DL
0064FA66  74 06                     JZ 0x0064fa6e
0064FA68  5F                        POP EDI
0064FA69  5E                        POP ESI
0064FA6A  33 C0                     XOR EAX,EAX
0064FA6C  5D                        POP EBP
0064FA6D  C3                        RET
LAB_0064fa6e:
0064FA6E  66 83 F9 0D               CMP CX,0xd
0064FA72  7D 10                     JGE 0x0064fa84
0064FA74  C7 40 38 01 00 00 00      MOV dword ptr [EAX + 0x38],0x1
LAB_0064fa7b:
0064FA7B  5F                        POP EDI
0064FA7C  5E                        POP ESI
0064FA7D  B8 01 00 00 00            MOV EAX,0x1
0064FA82  5D                        POP EBP
0064FA83  C3                        RET
LAB_0064fa84:
0064FA84  38 90 DC 00 00 00         CMP byte ptr [EAX + 0xdc],DL
0064FA8A  74 EF                     JZ 0x0064fa7b
LAB_0064fa8c:
0064FA8C  5F                        POP EDI
0064FA8D  5E                        POP ESI
0064FA8E  33 C0                     XOR EAX,EAX
0064FA90  5D                        POP EBP
0064FA91  C3                        RET
