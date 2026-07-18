swap:
00730AC0  55                        PUSH EBP
00730AC1  8B EC                     MOV EBP,ESP
00730AC3  51                        PUSH ECX
00730AC4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730AC7  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
00730ACA  74 3E                     JZ 0x00730b0a
LAB_00730acc:
00730ACC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00730ACF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00730AD2  83 EA 01                  SUB EDX,0x1
00730AD5  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00730AD8  85 C9                     TEST ECX,ECX
00730ADA  74 2E                     JZ 0x00730b0a
00730ADC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730ADF  8A 08                     MOV CL,byte ptr [EAX]
00730AE1  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00730AE4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730AE7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00730AEA  8A 08                     MOV CL,byte ptr [EAX]
00730AEC  88 0A                     MOV byte ptr [EDX],CL
00730AEE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730AF1  83 C2 01                  ADD EDX,0x1
00730AF4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00730AF7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00730AFA  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
00730AFD  88 08                     MOV byte ptr [EAX],CL
00730AFF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00730B02  83 C2 01                  ADD EDX,0x1
00730B05  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00730B08  EB C2                     JMP 0x00730acc
LAB_00730b0a:
00730B0A  8B E5                     MOV ESP,EBP
00730B0C  5D                        POP EBP
00730B0D  C3                        RET
