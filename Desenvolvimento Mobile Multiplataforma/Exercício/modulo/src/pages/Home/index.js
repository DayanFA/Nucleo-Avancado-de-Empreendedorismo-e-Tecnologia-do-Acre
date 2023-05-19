import React from "react";
import {View, Button} from "react-native";
import { useNavigation } from "@react-navigation/native";

export default function Home() {
    const navigation = useNavigation();
    return(
        <View>
           <Button title="Cadastro" onPress={ () => navigation.navigate("Cadastro de usuário")}/>
           <Button title="Lista" onPress={ () => navigation.navigate("Lista de usuário")}/>
           <Button title="Login" onPress={ () => navigation.navigate("Login")}/>

        </View>
    );
}
