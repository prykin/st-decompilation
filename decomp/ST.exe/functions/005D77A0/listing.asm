FUN_005d77a0:
005D77A0  55                        PUSH EBP
005D77A1  8B EC                     MOV EBP,ESP
005D77A3  51                        PUSH ECX
005D77A4  53                        PUSH EBX
005D77A5  56                        PUSH ESI
005D77A6  68 FC 21 00 00            PUSH 0x21fc
005D77AB  E8 20 8D 0D 00            CALL 0x006b04d0
005D77B0  8B F0                     MOV ESI,EAX
005D77B2  33 DB                     XOR EBX,EBX
005D77B4  3B F3                     CMP ESI,EBX
005D77B6  0F 84 FC 01 00 00         JZ 0x005d79b8
005D77BC  57                        PUSH EDI
005D77BD  8B CE                     MOV ECX,ESI
005D77BF  E8 EC E7 10 00            CALL 0x006e5fb0
005D77C4  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005D77CA  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005D77CD  B9 08 00 00 00            MOV ECX,0x8
005D77D2  33 C0                     XOR EAX,EAX
005D77D4  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005D77D7  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005D77DA  F3 AB                     STOSD.REP ES:EDI
005D77DC  B9 08 00 00 00            MOV ECX,0x8
005D77E1  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005D77E4  F3 AB                     STOSD.REP ES:EDI
005D77E6  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005D77EC  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005D77F2  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005d77f9:
005D77F9  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005D77FF  E8 1C E0 13 00            CALL 0x00715820
005D7804  8B CF                     MOV ECX,EDI
005D7806  E8 15 E0 13 00            CALL 0x00715820
005D780B  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005D7811  E8 0A E0 13 00            CALL 0x00715820
005D7816  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D7819  81 C7 FB 01 00 00         ADD EDI,0x1fb
005D781F  48                        DEC EAX
005D7820  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D7823  75 D4                     JNZ 0x005d77f9
005D7825  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005D782B  B9 0D 00 00 00            MOV ECX,0xd
005D7830  33 C0                     XOR EAX,EAX
005D7832  8D 7E 66                  LEA EDI,[ESI + 0x66]
005D7835  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005D7839  88 9E 9A 00 00 00         MOV byte ptr [ESI + 0x9a],BL
005D783F  F3 AB                     STOSD.REP ES:EDI
005D7841  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005D7847  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005d784e:
005D784E  B9 09 00 00 00            MOV ECX,0x9
005D7853  33 C0                     XOR EAX,EAX
005D7855  8B FA                     MOV EDI,EDX
005D7857  81 C2 FB 01 00 00         ADD EDX,0x1fb
005D785D  F3 AB                     STOSD.REP ES:EDI
005D785F  66 AB                     STOSW ES:EDI
005D7861  AA                        STOSB ES:EDI
005D7862  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D7865  48                        DEC EAX
005D7866  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D7869  75 E3                     JNZ 0x005d784e
005D786B  8D 8E 6B 1C 00 00         LEA ECX,[ESI + 0x1c6b]
005D7871  E8 AA DF 13 00            CALL 0x00715820
005D7876  8D 8E FC 1C 00 00         LEA ECX,[ESI + 0x1cfc]
005D787C  E8 9F DF 13 00            CALL 0x00715820
005D7881  8D 8E 8D 1D 00 00         LEA ECX,[ESI + 0x1d8d]
005D7887  E8 94 DF 13 00            CALL 0x00715820
005D788C  8D 8E E1 21 00 00         LEA ECX,[ESI + 0x21e1]
005D7892  33 C0                     XOR EAX,EAX
005D7894  89 9E 5F 1C 00 00         MOV dword ptr [ESI + 0x1c5f],EBX
005D789A  89 9E 63 1C 00 00         MOV dword ptr [ESI + 0x1c63],EBX
005D78A0  89 9E 27 1E 00 00         MOV dword ptr [ESI + 0x1e27],EBX
005D78A6  89 9E 2B 1E 00 00         MOV dword ptr [ESI + 0x1e2b],EBX
005D78AC  89 01                     MOV dword ptr [ECX],EAX
005D78AE  8D BE 61 21 00 00         LEA EDI,[ESI + 0x2161]
005D78B4  83 CA FF                  OR EDX,0xffffffff
005D78B7  66 89 41 04               MOV word ptr [ECX + 0x4],AX
005D78BB  88 41 06                  MOV byte ptr [ECX + 0x6],AL
005D78BE  B9 20 00 00 00            MOV ECX,0x20
005D78C3  F3 AB                     STOSD.REP ES:EDI
005D78C5  B9 50 00 00 00            MOV ECX,0x50
005D78CA  8D BE 8C 1F 00 00         LEA EDI,[ESI + 0x1f8c]
005D78D0  89 9E 2F 1E 00 00         MOV dword ptr [ESI + 0x1e2f],EBX
005D78D6  89 9E 43 1F 00 00         MOV dword ptr [ESI + 0x1f43],EBX
005D78DC  89 9E 3F 1F 00 00         MOV dword ptr [ESI + 0x1f3f],EBX
005D78E2  89 9E 4F 1F 00 00         MOV dword ptr [ESI + 0x1f4f],EBX
005D78E8  89 9E 4B 1F 00 00         MOV dword ptr [ESI + 0x1f4b],EBX
005D78EE  89 9E 84 1F 00 00         MOV dword ptr [ESI + 0x1f84],EBX
005D78F4  F3 AB                     STOSD.REP ES:EDI
005D78F6  8D BE CC 20 00 00         LEA EDI,[ESI + 0x20cc]
005D78FC  B9 0A 00 00 00            MOV ECX,0xa
005D7901  8B C2                     MOV EAX,EDX
005D7903  89 9E 1D 21 00 00         MOV dword ptr [ESI + 0x211d],EBX
005D7909  89 9E 88 1F 00 00         MOV dword ptr [ESI + 0x1f88],EBX
005D790F  F3 AB                     STOSD.REP ES:EDI
005D7911  B9 0A 00 00 00            MOV ECX,0xa
005D7916  33 C0                     XOR EAX,EAX
005D7918  8D BE F4 20 00 00         LEA EDI,[ESI + 0x20f4]
005D791E  F3 AB                     STOSD.REP ES:EDI
005D7920  B9 0E 00 00 00            MOV ECX,0xe
005D7925  8D BE 25 21 00 00         LEA EDI,[ESI + 0x2125]
005D792B  89 9E 1E 1E 00 00         MOV dword ptr [ESI + 0x1e1e],EBX
005D7931  89 96 22 1E 00 00         MOV dword ptr [ESI + 0x1e22],EDX
005D7937  F3 AB                     STOSD.REP ES:EDI
005D7939  B9 07 00 00 00            MOV ECX,0x7
005D793E  8D BE 60 1F 00 00         LEA EDI,[ESI + 0x1f60]
005D7944  89 9E 5D 21 00 00         MOV dword ptr [ESI + 0x215d],EBX
005D794A  89 9E F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EBX
005D7950  89 9E F4 21 00 00         MOV dword ptr [ESI + 0x21f4],EBX
005D7956  89 9E F0 21 00 00         MOV dword ptr [ESI + 0x21f0],EBX
005D795C  89 9E EC 21 00 00         MOV dword ptr [ESI + 0x21ec],EBX
005D7962  89 9E E8 21 00 00         MOV dword ptr [ESI + 0x21e8],EBX
005D7968  89 96 80 1F 00 00         MOV dword ptr [ESI + 0x1f80],EDX
005D796E  89 9E 67 1C 00 00         MOV dword ptr [ESI + 0x1c67],EBX
005D7974  89 9E 47 1F 00 00         MOV dword ptr [ESI + 0x1f47],EBX
005D797A  89 9E 7C 1F 00 00         MOV dword ptr [ESI + 0x1f7c],EBX
005D7980  F3 AB                     STOSD.REP ES:EDI
005D7982  B0 01                     MOV AL,0x1
005D7984  89 9E 58 1F 00 00         MOV dword ptr [ESI + 0x1f58],EBX
005D798A  88 86 57 1F 00 00         MOV byte ptr [ESI + 0x1f57],AL
005D7990  88 86 5D 1F 00 00         MOV byte ptr [ESI + 0x1f5d],AL
005D7996  88 86 5E 1F 00 00         MOV byte ptr [ESI + 0x1f5e],AL
005D799C  88 86 5F 1F 00 00         MOV byte ptr [ESI + 0x1f5f],AL
005D79A2  C6 86 5C 1F 00 00 04      MOV byte ptr [ESI + 0x1f5c],0x4
005D79A9  C7 06 60 C1 79 00         MOV dword ptr [ESI],0x79c160
005D79AF  8B C6                     MOV EAX,ESI
005D79B1  5F                        POP EDI
005D79B2  5E                        POP ESI
005D79B3  5B                        POP EBX
005D79B4  8B E5                     MOV ESP,EBP
005D79B6  5D                        POP EBP
005D79B7  C3                        RET
LAB_005d79b8:
005D79B8  5E                        POP ESI
005D79B9  33 C0                     XOR EAX,EAX
005D79BB  5B                        POP EBX
005D79BC  8B E5                     MOV ESP,EBP
005D79BE  5D                        POP EBP
005D79BF  C3                        RET
