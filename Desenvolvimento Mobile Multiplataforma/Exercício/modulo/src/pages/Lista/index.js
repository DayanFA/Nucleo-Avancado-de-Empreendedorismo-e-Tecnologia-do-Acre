import React, {useState, useEffect} from "react";
import {View, Text, FlatList, StyleSheet, Button} from "react-native";
import api from "../Services/Api";

export default function Lista() {
    const [lista, setLista] = useState();

    function atualiza(){
        api.get('/usuario_teste')
        .then(function (response){
            setLista(response.data);
            console.log(response.data.data);
        })
        .catch(function(                   ){
            console.log(error);
        })
        }

    return(
        <View style={styles.container}>
            <Button onPress={() => atualiza()}
            title="Atualizar"/>
        <FlatList
            data={lista}
            keyExtractor={item => item.id}
            renderItem={({item})=>
                <View style={styles.grupo}>
                    <Text>Nome: {item.nome}</Text>
                    <Text>{item.celular}</Text>
                </View>}
            />
        </View>
    )
}
const styles = StyleSheet.create({
    container: {
        flex: 1,
        alignItems:'center'
    }
})