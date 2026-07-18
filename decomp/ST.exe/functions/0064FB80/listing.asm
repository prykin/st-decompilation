FUN_0064fb80:
0064FB80  55                        PUSH EBP
0064FB81  8B EC                     MOV EBP,ESP
0064FB83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064FB86  53                        PUSH EBX
0064FB87  33 D2                     XOR EDX,EDX
0064FB89  33 C9                     XOR ECX,ECX
0064FB8B  BB 08 00 00 00            MOV EBX,0x8
LAB_0064fb90:
0064FB90  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
0064FB97  0F 85 E1 00 00 00         JNZ 0x0064fc7e
0064FB9D  41                        INC ECX
0064FB9E  83 F9 02                  CMP ECX,0x2
0064FBA1  7C ED                     JL 0x0064fb90
0064FBA3  66 8B 08                  MOV CX,word ptr [EAX]
0064FBA6  66 83 F9 03               CMP CX,0x3
0064FBAA  7D 0E                     JGE 0x0064fbba
0064FBAC  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
LAB_0064fbaf:
0064FBAF  66 83 F9 04               CMP CX,0x4
0064FBB3  7D 12                     JGE 0x0064fbc7
0064FBB5  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
0064FBB8  EB 1B                     JMP 0x0064fbd5
LAB_0064fbba:
0064FBBA  38 98 D2 00 00 00         CMP byte ptr [EAX + 0xd2],BL
0064FBC0  74 ED                     JZ 0x0064fbaf
0064FBC2  33 C0                     XOR EAX,EAX
0064FBC4  5B                        POP EBX
0064FBC5  5D                        POP EBP
0064FBC6  C3                        RET
LAB_0064fbc7:
0064FBC7  80 B8 D3 00 00 00 0A      CMP byte ptr [EAX + 0xd3],0xa
0064FBCE  74 05                     JZ 0x0064fbd5
0064FBD0  33 C0                     XOR EAX,EAX
0064FBD2  5B                        POP EBX
0064FBD3  5D                        POP EBP
0064FBD4  C3                        RET
LAB_0064fbd5:
0064FBD5  83 CA FF                  OR EDX,0xffffffff
0064FBD8  66 83 F9 05               CMP CX,0x5
0064FBDC  7D 0E                     JGE 0x0064fbec
0064FBDE  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
LAB_0064fbe1:
0064FBE1  66 83 F9 06               CMP CX,0x6
0064FBE5  7D 12                     JGE 0x0064fbf9
0064FBE7  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0064FBEA  EB 1A                     JMP 0x0064fc06
LAB_0064fbec:
0064FBEC  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
0064FBF2  74 ED                     JZ 0x0064fbe1
0064FBF4  33 C0                     XOR EAX,EAX
0064FBF6  5B                        POP EBX
0064FBF7  5D                        POP EBP
0064FBF8  C3                        RET
LAB_0064fbf9:
0064FBF9  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0064FBFF  74 05                     JZ 0x0064fc06
0064FC01  33 C0                     XOR EAX,EAX
0064FC03  5B                        POP EBX
0064FC04  5D                        POP EBP
0064FC05  C3                        RET
LAB_0064fc06:
0064FC06  66 83 F9 07               CMP CX,0x7
0064FC0A  7D 0D                     JGE 0x0064fc19
0064FC0C  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_0064fc0f:
0064FC0F  66 3B CB                  CMP CX,BX
0064FC12  7D 12                     JGE 0x0064fc26
0064FC14  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
0064FC17  EB 1A                     JMP 0x0064fc33
LAB_0064fc19:
0064FC19  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0064FC1F  74 EE                     JZ 0x0064fc0f
0064FC21  33 C0                     XOR EAX,EAX
0064FC23  5B                        POP EBX
0064FC24  5D                        POP EBP
0064FC25  C3                        RET
LAB_0064fc26:
0064FC26  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
0064FC2C  74 05                     JZ 0x0064fc33
0064FC2E  33 C0                     XOR EAX,EAX
0064FC30  5B                        POP EBX
0064FC31  5D                        POP EBP
0064FC32  C3                        RET
LAB_0064fc33:
0064FC33  66 83 F9 09               CMP CX,0x9
0064FC37  7D 0E                     JGE 0x0064fc47
0064FC39  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
LAB_0064fc3c:
0064FC3C  66 83 F9 0A               CMP CX,0xa
0064FC40  7D 12                     JGE 0x0064fc54
0064FC42  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
0064FC45  EB 1A                     JMP 0x0064fc61
LAB_0064fc47:
0064FC47  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
0064FC4D  74 ED                     JZ 0x0064fc3c
0064FC4F  33 C0                     XOR EAX,EAX
0064FC51  5B                        POP EBX
0064FC52  5D                        POP EBP
0064FC53  C3                        RET
LAB_0064fc54:
0064FC54  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
0064FC5A  74 05                     JZ 0x0064fc61
0064FC5C  33 C0                     XOR EAX,EAX
0064FC5E  5B                        POP EBX
0064FC5F  5D                        POP EBP
0064FC60  C3                        RET
LAB_0064fc61:
0064FC61  66 83 F9 0B               CMP CX,0xb
0064FC65  7D 0F                     JGE 0x0064fc76
0064FC67  C7 40 30 01 00 00 00      MOV dword ptr [EAX + 0x30],0x1
LAB_0064fc6e:
0064FC6E  B8 01 00 00 00            MOV EAX,0x1
0064FC73  5B                        POP EBX
0064FC74  5D                        POP EBP
0064FC75  C3                        RET
LAB_0064fc76:
0064FC76  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
0064FC7C  74 F0                     JZ 0x0064fc6e
LAB_0064fc7e:
0064FC7E  33 C0                     XOR EAX,EAX
0064FC80  5B                        POP EBX
0064FC81  5D                        POP EBP
0064FC82  C3                        RET
